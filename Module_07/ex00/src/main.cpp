/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 09:42:19 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/16 10:03:20 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/whatever.hpp"

int main()
{
    {
        std::cout << "--- MAIN EXO ---" << std::endl << std::endl;
        int a = 2;
        int b = 3;

        ::swap( a, b );
        std::cout << "a = " << a << ", b = " << b << std::endl;
        std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
        std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

        std::string c = "chaine1";
        std::string d = "chaine2";

        ::swap(c, d);
        std::cout << "c = " << c << ", d = " << d << std::endl;
        std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
        std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
        std::cout << "--- FIN MAIN EXO DEBUT MAIN PERSO ---" << std::endl << std::endl;

    }
    {
        std::cout << "--- INT ---" << std::endl << std::endl;
        int a = 42;
        int b = -42;
        int c = a;

        std::cout << "a = " << a << std::endl;
        std::cout << "b = " << b << std::endl;
        std::cout << "c = " << c << std::endl << std::endl;

        std::cout << "   --- MIN ---"<< std::endl << std::endl;
        
        std::cout << "min<int>(a, b) = " << min<int>(a, b) << std::endl;
        std::cout << "min<int>(a, c) = " << min<int>(a, c) << std::endl;
        std::cout << "min<int>(c, b) = " << min<int>(c, b) << std::endl;

        std::cout << "   --- MAX ---"<< std::endl << std::endl;

        std::cout << "max<int>(a, b) = " << max<int>(a, b) << std::endl;
        std::cout << "max<int>(a, c) = " << max<int>(a, c) << std::endl;
        std::cout << "max<int>(c, b) = " << max<int>(c, b) << std::endl;

        std::cout << "   --- swap (c,b) ---"<< std::endl << std::endl;
        swap<int>(c, b);

        std::cout << "a = " << a << std::endl;
        std::cout << "b = " << b << std::endl;
        std::cout << "c = " << c << std::endl << std::endl;
    }

    {
        std::cout << "--- CHAR ---" << std::endl << std::endl;
        char a = 42;
        char b = 'a';
        char c = a;

        std::cout << "a = " << a << std::endl;
        std::cout << "b = " << b << std::endl;
        std::cout << "c = " << c << std::endl << std::endl;

        std::cout << "   --- MIN ---"<< std::endl << std::endl;
        
        std::cout << "min<char>(a, b) = " << min<char>(a, b) << std::endl;
        std::cout << "min<char>(a, c) = " << min<char>(a, c) << std::endl;
        std::cout << "min<char>(c, b) = " << min<char>(c, b) << std::endl;

        std::cout << "   --- MAX ---"<< std::endl << std::endl;

        std::cout << "max<char>(a, b) = " << max<char>(a, b) << std::endl;
        std::cout << "max<char>(a, c) = " << max<char>(a, c) << std::endl;
        std::cout << "max<char>(c, b) = " << max<char>(c, b) << std::endl;

        std::cout << "   --- swap (c,b) ---"<< std::endl << std::endl;
        swap<char>(c, b);

        std::cout << "a = " << a << std::endl;
        std::cout << "b = " << b << std::endl;
        std::cout << "c = " << c << std::endl << std::endl;
    }

    {
        std::cout << "--- FLOAT ---" << std::endl << std::endl;
        float a = 42;
        float b = 42.42f;
        float c = a;

        std::cout << "a = " << a << std::endl;
        std::cout << "b = " << b << std::endl;
        std::cout << "c = " << c << std::endl << std::endl;

        std::cout << "   --- MIN ---"<< std::endl << std::endl;
        
        std::cout << "min<float>(a, b) = " << min<float>(a, b) << std::endl;
        std::cout << "min<float>(a, c) = " << min<float>(a, c) << std::endl;
        std::cout << "min<float>(c, b) = " << min<float>(c, b) << std::endl;

        std::cout << "   --- MAX ---"<< std::endl << std::endl;

        std::cout << "max<float>(a, b) = " << max<float>(a, b) << std::endl;
        std::cout << "max<float>(a, c) = " << max<float>(a, c) << std::endl;
        std::cout << "max<float>(c, b) = " << max<float>(c, b) << std::endl;

        std::cout << "   --- swap (c,b) ---"<< std::endl << std::endl;
        swap<float>(c, b);

        std::cout << "a = " << a << std::endl;
        std::cout << "b = " << b << std::endl;
        std::cout << "c = " << c << std::endl << std::endl;
    }
}