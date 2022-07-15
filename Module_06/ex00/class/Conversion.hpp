/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 13:35:55 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/15 10:06:18 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <climits>
# include <cctype>
# include <string>
# include <cmath>
# include <iomanip>

class Conversion
{
    public:
        //Constructor
        Conversion(char *argv);
        Conversion(const Conversion &cpy);

        //Destructor
        ~Conversion();

        //Operator
        Conversion  &operator=(const Conversion &cpy);

        //Function
            //Accesssor
        std::string Get_Type() const;
        char    Get_Char() const;
        int     Get_Int() const;
        float   Get_Float() const;
        double  Get_Double() const;
        bool    Get_Charerror() const;
        bool    Get_Interror() const;
        bool    Get_CharNoprint() const;
        
            //CheckType
        bool    Check_Char(const char *str);
        bool    Check_Int(const char *str);
        bool    Check_Float(const char *str);
        bool    Check_Double(const char *str);
        
            //Other
        void    Display() const;
        void    SetAll();
    
    private:
        //Constructor
        Conversion();

        //Attribut
        std::string _type;
        char        _char;
        int         _int;
        float       _float;
        double      _double;
        bool        _charerror;
        bool        _interror;
        bool        _charNoprint;
};

#endif