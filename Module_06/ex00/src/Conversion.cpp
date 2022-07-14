/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 13:35:54 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/14 19:39:42 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/Conversion.hpp"

//Constructor

Conversion::Conversion(){
}

Conversion::Conversion(char *argv){
    if (Check_Char(argv) && Check_Int(argv) && Check_Double(argv) && Check_Float(argv))
        this->_type = "notype";
    SetAll();
    std::cout << "[Conversion] Constructor Called" << std::endl;
}

Conversion::Conversion(const Conversion &cpy){
    std::cout << "[Conversion] Copy Constructor Called" << std::endl;
    *this = cpy;
}

//Destructor

Conversion::~Conversion()
{
    std::cout << "[Conversion] Destructor Called" << std::endl;
}

//Operator

Conversion  &Conversion::operator=(const Conversion &cpy)
{
    std::cout << "[Conversion] Assignement Called" << std::endl;
    this->_char = cpy._char;
    this->_int = cpy._int;
    this->_float = cpy._float;
    this->_double = cpy._double;
}

//Throw
const char  *Conversion::ErrorType::what() const throw(){
    return ("No Type detected")
}

//Function

    //Accessor
std::string Conversion::Get_Type() const{
    return (this->_type);
}

char    Conversion::Get_Char() const{
    return (this->_char);
}

int    Conversion::Get_Int() const{
    return (this->_int);
}

float    Conversion::Get_Float() const{
    return (this->_float);
}

double    Conversion::Get_Double() const{
    return (this->_double);
}

    //CheckType

bool    Conversion::Check_Char(const char *str)
{
    if (str[1] || std::isprint(str[0]))
        return (false);
    this->_type = "CHAR";
    this->_char = str[0];
    return (true);

}

bool    Conversion::Check_Int(const char *str)
{
    char    *endptr = NULL;
    long    nb = strtol(str, &endptr, 10);

    if (endptr || nb < INT_MIN || nb > INT_MAX)
        return (false);
    this->_type = "INT";
    this->_int = static_cast<int>(nb);
    return (true);
}

bool    Conversion::Check_Float(const char *str)
{
    char    *endptr = NULL;
    long    nb = strtol(str, &endptr, 10);

    if (endptr[0] != 'f' || endptr[1])
        return (false);
    this->_type = "FLOAT";
    this->_float = static_cast<float>(nb);
    return (true);
}

bool    Conversion::Check_Double(const char *str)
{
    char    *endptr = NULL;
    double  nb = strtod(str, &endptr);

    if (endptr)
        return (false);
    this->_type = "DOUBLE";
    this->_double = static_cast<double>(nb);
    return (true);
}

    //Other
void    Conversion::Display() const
{
    std::cout <<"char  : " << this->Get_Char() <<
                "int   : " << this->Get_Int() <<
                "float : " << this->Get_Float() <<
                "double: " << this->Get_Double() << std::endl;
}

void    Conversion::SetAll()
{
    int i = 0;
    std::string tab[] = {"INT", "CHAR", "FLOAT", "DOUBLE"};
    for (i; i < 4; i++)
        if (this->Get_Type() == tab[i])
            break;
    switch (i)
    {
        case 0://INT
            this->_char = static_cast<char>(this->_int);
            this->_float = static_cast<float>(this->_int);
            this->_double = static_cast<double>(this->_int);
        break;

        case 1://CHAR
            this->_int = static_cast<int>(this->_char);
            this->_float = static_cast<float>(this->_char);
            this->_double = static_cast<double>(this->_char);
        break;

        case 2://FLOAT
            this->_int = static_cast<int>(this->_float);
            this->_char = static_cast<char>(this->_float);
            this->_double = static_cast<double>(this->_float);

        break;

        case 3://DOUBLE
            this->_int = static_cast<int>(this->_double);
            this->_float = static_cast<float>(this->_double);
            this->_char = static_cast<char>(this->_double);

        break;
    
    default:
            this->_char = ;//impossible
            this->_int = ;//impossible
            this->_float = NAN;
            this->_double = NAN;
        break;
    }
}