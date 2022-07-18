/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 11:23:37 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/18 12:49:16 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/Span.hpp"

int	main()
{
	{	
		std::cout << "--- SUBJECT MAIN ---" << std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << "--- END SUBJECT MAIN ---" << std::endl << std::endl;
	}
	std::cout << "--- MY MAIN ---" << std::endl << std::endl;
	{
		std::cout << "   --- Creation vector size 5 ---" << std::endl;
		Span alpha = Span(5);
		std::cout << "      --- add element when max was reach ---" << std::endl;
		for (int i = 0; i < 6; i++)
		{
			try{
				alpha.addNumber(i);}
			catch(const std::exception& e){
				std::cout << e.what() << std::endl;}
		}

		std::cout << "   --- Creation vector size 10 ---" << std::endl;
		Span charlie(10);
		std::cout << "      --- add element when max was reach ---" << std::endl;
		for (int i = 0; i < 11; i++)
		{
			try{
				charlie.addNumber((i + 10) * 2);}
			catch(const std::exception& e){
				std::cout << e.what() << std::endl;}
		}

		std::cout << "   --- Create copy from vector size 5 ---" << std::endl;

		alpha.print();
		Span bravo(alpha);
		bravo.print();

		std::cout << "   --- reassigment from vector size 10 ---" << std::endl;
		alpha = charlie;
		alpha.print();
		charlie.print();
	}
	{
		std::cout << "--- Try shortest and longest on unvalid vector ---" << std::endl << std::endl;
		Span	zero(0);
		Span	one(1);
		Span	two(2);

		std::cout << "   --- Zero ---" << std::endl;
		std::cout << "      --- Zero add ---" << std::endl;
		{
			for (int i = 0; i < 2; i++)
			{
				try{
					zero.addNumber(i);}
				catch(const std::exception& e){
					std::cout << e.what() << std::endl;}
			}
			zero.print();
			std::cout << "      --- Zero longest ---" << std::endl;
			try{
					std::cout << zero.longestSpan() << std::endl;}
				catch(const std::exception& e){
					std::cout << e.what() << std::endl;}
			std::cout << "      --- Zero shortest ---" << std::endl;
			try{
					std::cout << zero.shortestSpan() << std::endl;}
				catch(const std::exception& e){
					std::cout << e.what() << std::endl;}
		}

		std::cout << std::endl << "   --- One  ---" << std::endl;
		{
			for (int i = 0; i < 2; i++)
			{
				try{
					one.addNumber(i + 5);}
				catch(const std::exception& e){
					std::cout << e.what() << std::endl;}
			}
			one.print();
			std::cout << "      --- One longest ---" << std::endl;
			try{
					std::cout << one.longestSpan() << std::endl;}
				catch(const std::exception& e){
					std::cout << e.what() << std::endl;}
			std::cout << "      --- One shortest ---" << std::endl;
			try{
					std::cout << one.shortestSpan() << std::endl;}
				catch(const std::exception& e){
					std::cout << e.what() << std::endl;}
		}

		std::cout << "   --- Two with 1 element ---" << std::endl;
		{
			for (int i = 0; i < 1; i++)
			{
				try{
					two.addNumber(i + 5);}
				catch(const std::exception& e){
					std::cout << e.what() << std::endl;}
			}
			two.print();
			std::cout << "      --- Two longest ---" << std::endl;
			try{
					std::cout << two.longestSpan() << std::endl;}
				catch(const std::exception& e){
					std::cout << e.what() << std::endl;}
			std::cout << "      --- Two shortest ---" << std::endl;
			try{
					std::cout << two.shortestSpan() << std::endl;}
				catch(const std::exception& e){
					std::cout << e.what() << std::endl;}
		}

	}
	{
		std::cout << "--- Try shortest and longest on valid vector ---" << std::endl << std::endl;
		{
			std::cout << "   --- Two ---" << std::endl;
			Span two(2);
			for (int i = 0; i < 3; i++)
			{
				try{
					two.addNumber(i + 5);}
				catch(const std::exception& e){
					std::cout << e.what() << std::endl;}
			}
			two.print();
			std::cout << "      --- Two longest ---" << std::endl;
			try{
					std::cout << two.longestSpan() << std::endl;}
				catch(const std::exception& e){
					std::cout << e.what() << std::endl;}
			std::cout << "      --- Two shortest ---" << std::endl;
			try{
					std::cout << two.shortestSpan() << std::endl;}
				catch(const std::exception& e){
					std::cout << e.what() << std::endl;}
		}
		{
			std::cout << "   --- 100 ---" << std::endl;
			int	nb = 100;
			Span Hundred(nb);
			for (int i = 0; i < nb + 1; i++)
			{
				try{
					Hundred.addNumber(i * 5);}
				catch(const std::exception& e){
					std::cout << e.what() << std::endl;}
			}
			Hundred.print();
			std::cout << "      --- Hundred longest ---" << std::endl;
			try{
					std::cout << Hundred.longestSpan() << std::endl;}
				catch(const std::exception& e){
					std::cout << e.what() << std::endl;}
			std::cout << "      --- Hundred shortest ---" << std::endl;
			try{
					std::cout << Hundred.shortestSpan() << std::endl;}
				catch(const std::exception& e){
					std::cout << e.what() << std::endl;}
		}
		{
			std::cout << "   --- 100000 ---" << std::endl;
			int	nb = 10000;
			Span Hundred(nb);
			for (int i = 0; i < nb + 1; i++)
			{
				try{
					Hundred.addNumber(i * 5);}
				catch(const std::exception& e){
					std::cout << e.what() << std::endl;}
			}
			//Hundred.print();
			std::cout << "      --- 100000 longest ---" << std::endl;
			try{
					std::cout << Hundred.longestSpan() << std::endl;}
				catch(const std::exception& e){
					std::cout << e.what() << std::endl;}
			std::cout << "      --- 100000 shortest ---" << std::endl;
			try{
					std::cout << Hundred.shortestSpan() << std::endl;}
				catch(const std::exception& e){
					std::cout << e.what() << std::endl;}
		}
	}
return 0;
}