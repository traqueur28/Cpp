/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 10:39:45 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/16 14:58:47 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/Array.hpp"

#include <iostream>

#define MAX_VAL 750
int main(int, char**)
{
    std::cout << "--- MAIN SUBJECT ---" << std::endl << std::endl;
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    // SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//

//---------------------------------------------------------------------
    std::cout << "--- END MAIN SUBJECT ---" << std::endl << std::endl;
    {
        std::cout << "--- INT ARRAY ---" << std::endl << std::endl;
        
        std::cout << "empty" << std::endl;
			Array<int>	empty;
			std::cout << "Size of empty: " << empty.size() << std::endl;
			
			std::cout << "four" << std::endl;
			Array<int>	four(4);
			std::cout << "Size of four: " << four.size() << std::endl;
			
			std::cout << "copy" << std::endl;
			Array<int>	copy(four);
			std::cout << "Size of copy: " << copy.size() << std::endl;
			
			std::cout << "assignement" << std::endl;
			Array<int>	assignement;
			assignement = empty;
			std::cout << "Size of assignement: " << assignement.size() << std::endl;
    }
    {
        Array<int>	empty;
		Array<int>	five(5);
			
		try
		{
			std::cout << "Size of empty: " << empty.size() << std::endl;
			std::cout << empty[0] << std::endl;
		}
		catch (const std::exception& e)
		{ std::cerr << e.what() << std::endl; }
		std::cout << std::endl;
		
		try
		{
			std::cout << "Size of five: " << five.size() << std::endl;
			five[0] = 42;
			five[1] = 28;
			five[2] = 6;
			five[3] = 28;
			five[4] = 'd';
			for(unsigned int i = 0; i < 6; i++)
				std::cout << five[i] << std::endl;
		}
		catch (const std::exception& e)
		{ std::cerr << e.what() << std::endl; }
		std::cout << std::endl;
    }
    //---------------------------------------------------------------------
    {
        std::cout << "--- CHAR ARRAY ---" << std::endl << std::endl;
        
        std::cout << "empty" << std::endl;
			Array<char>	empty;
			std::cout << "Size of empty: " << empty.size() << std::endl;
			
			std::cout << "four" << std::endl;
			Array<char>	four(4);
			std::cout << "Size of four: " << four.size() << std::endl;
			
			std::cout << "copy" << std::endl;
			Array<char>	copy(four);
			std::cout << "Size of copy: " << copy.size() << std::endl;
			
			std::cout << "assignement" << std::endl;
			Array<char>	assignement;
			assignement = empty;
			std::cout << "Size of assignement: " << assignement.size() << std::endl;
    }
    {
        Array<char>	empty;
		Array<char>	five(5);
			
		try
		{
			std::cout << "Size of empty: " << empty.size() << std::endl;
			std::cout << empty[0] << std::endl;
		}
		catch (const std::exception& e)
		{ std::cerr << e.what() << std::endl; }
		std::cout << std::endl;
		
		try
		{
			std::cout << "Size of five: " << five.size() << std::endl;
			five[0] = 'A';
			five[1] = '4';
			five[2] = '2';
			five[3] = 68;
			five[4] = 'd';
			for(unsigned int i = 0; i < 6; i++)
				std::cout << five[i] << std::endl;
		}
		catch (const std::exception& e)
		{ std::cerr << e.what() << std::endl; }
		std::cout << std::endl;
    }

    
    return 0;
}
