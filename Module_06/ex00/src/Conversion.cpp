/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 13:35:54 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/15 10:06:27 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/Conversion.hpp"

//Constructor

Conversion::Conversion(){
}

Conversion::Conversion(char *argv): _charerror(false), _interror(false), _charNoprint(false)
{
    if (!Check_Char(argv) && !Check_Int(argv) && !Check_Double(argv) && !Check_Float(argv))
        this->_type = "notype";
    SetAll();
}

Conversion::Conversion(const Conversion &cpy){
    *this = cpy;
}

//Destructor

Conversion::~Conversion(){
}

//Operator

Conversion  &Conversion::operator=(const Conversion &cpy)
{
    // std::cout << "[Conversion] Assignement Called" << std::endl;
    this->_type = cpy._type;
    this->_char = cpy._char;
    this->_int = cpy._int;
    this->_float = cpy._float;
    this->_double = cpy._double;
    this->_charerror = cpy._charerror;
    this->_interror = cpy._interror;
    this->_charNoprint = cpy._charNoprint;
    return (*this);   
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

bool    Conversion::Get_Charerror() const{
    return (this->_charerror);
}

bool    Conversion::Get_Interror() const{
    return (this->_interror);
}

bool    Conversion::Get_CharNoprint() const{
    return (this->_charNoprint);
}

    //CheckType

bool    Conversion::Check_Char(const char *str)
{
    if (str[1] || !std::isprint(str[0]))
        return (false);
    this->_type = "CHAR";
    this->_char = str[0];
    return (true);

}

bool    Conversion::Check_Int(const char *str)
{
    char    *endptr = NULL;
    long    nb = strtol(str, &endptr, 10);

    if (*endptr || nb < INT_MIN || nb > INT_MAX)
        return (false);
    this->_type = "INT";
    this->_int = static_cast<int>(nb);
    return (true);
}

bool    Conversion::Check_Float(const char *str)
{
    char    *endptr = NULL;
    float   nb = strtof(str, &endptr);

    if (endptr[0] != 'f' || endptr[1])
        return (false);
    this->_type = "FLOAT";
    this->_float = nb;
    return (true);
}

bool    Conversion::Check_Double(const char *str)
{
    char    *endptr = NULL;
    double  nb = strtod(str, &endptr);

    if (*endptr)
        return (false);
    this->_type = "DOUBLE";
    this->_double = nb;
    return (true);
}

    //Other
void    Conversion::Display() const
{
    std::cout << std::fixed << std::setprecision(1);

    std::cout <<"char  : ";
    if (this->_charerror)
        std::cout << "Impossible" << std::endl;
    else if (this->_charNoprint)
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << this->_char << std::endl;
    
    std::cout <<"int   : ";
    if (this->_interror)
        std::cout << "Impossible" << std::endl;
    else
        std::cout << this->_int << std::endl;
    
    std::cout << "float : " << this->_float << "f" << std::endl;
	std::cout << "double: " << this->_double << std::endl;
}

void    Conversion::SetAll()
{

    if (this->_type == "INT")
    {
        this->_char = static_cast<char>(_int);
        this->_float = static_cast<float>(_int);
        this->_double = static_cast<double>(_int);
    }
    else if (this->_type == "CHAR")
    {
        this->_int = static_cast<int>(_char);
        this->_float = static_cast<float>(_char);
        this->_double = static_cast<double>(_char);
    }
    else if (this->_type == "FLOAT")
    {
        this->_int = static_cast<int>(_float);
        this->_char = static_cast<char>(_float);
        this->_double = static_cast<double>(_float);
    }
    else if (this->_type == "DOUBLE")
    {
        this->_int = static_cast<int>(_double);
        this->_float = static_cast<float>(_double);
        this->_char = static_cast<char>(_double);
    }
    else
    {
        this->_charerror = true;
        this->_interror = true;
        this->_float = NAN;
        this->_double = NAN;
    }
    
    double x = this->_double;
    if (x < INT_MIN || x > INT_MAX || std::isnan(x) || std::isinf(x))
	{
		this->_charerror = true;
		this->_interror = true;
	}
	else if (x < CHAR_MIN || x > CHAR_MAX)
		this->_charerror = true;
	else if (!std::isprint(this->_char))
		this->_charNoprint = true;
}