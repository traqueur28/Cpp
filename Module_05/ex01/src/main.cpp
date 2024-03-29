/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 10:16:28 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/12 14:07:39 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/Bureaucrat.hpp"

int	main()
{
	{
		Bureaucrat	alpha("alpha", 42);
		Bureaucrat	bravo("bravo", 84);

		bravo = alpha;
		std::cout << bravo << std::endl;
		try{
			Bureaucrat	charlie("charlie", 0);
		}
		catch (std::exception &e){
			std::cerr << e.what() << std::endl;
		}
		try{
			Bureaucrat	delta("delta", 151);	
		}
		catch (std::exception &e){
			std::cerr << e.what() << std::endl;
		}
		Bureaucrat	echo(alpha);
	}
	{
		std::cout << "--- PROMOTE ---" << std::endl;
		Bureaucrat	leader("leader", 1);
		Bureaucrat	manager("manager", 75);
		Bureaucrat	slave("slave", 150);

		try{
			leader.promote();
		}
		catch(std::exception &e){
			std::cerr << e.what() << std::endl;
		}
		try{
			manager.promote();
		}
		catch(std::exception &e){
			std::cerr << e.what() << std::endl;
		}
		try{
			slave.promote();
		}
		catch(std::exception &e){
			std::cerr << e.what() << std::endl;
		}
		std::cout << leader << std::endl;
		std::cout << manager << std::endl;
		std::cout << slave << std::endl;
	}
	{
		std::cout << "--- RETROGRADE ---" << std::endl;
		Bureaucrat	leader("leader", 1);
		Bureaucrat	manager("manager", 75);
		Bureaucrat	slave("slave", 150);

		try{
			leader.retrograde();
		}
		catch(std::exception &e){
			std::cerr << e.what() << std::endl;
		}
		try{
			manager.retrograde();
		}
		catch(std::exception &e){
			std::cerr << e.what() << std::endl;
		}
		try{
			slave.retrograde();
		}
		catch(std::exception &e){
			std::cerr << e.what() << std::endl;
		}
		std::cout << leader << std::endl;
		std::cout << manager << std::endl;
		std::cout << slave << std::endl;
	}
	std::cout << std::endl << "--- FORM ---" << std::endl << std::endl;
	{
		std::cout << "--- SIGN CREA---" << std::endl;

		try{
			Form	FormA("forma", 151, 5);
		}
		catch(std::exception &e){
			std::cerr << e.what() << std::endl;
		}
		try{
			Form	Formb("formb", 0, 5);
		}
		catch(std::exception &e){
			std::cerr << e.what() << std::endl;
		}
		try{
			Form	Formc("formc", 150, 5);
		}
		catch(std::exception &e){
			std::cerr << e.what() << std::endl;
		}
		try{
			Form	Formd("formd", 1, 5);
		}
		catch(std::exception &e){
			std::cerr << e.what() << std::endl;
		}
		try{
			Form	Forme("forme", 50, 151);
		}
		catch(std::exception &e){
			std::cerr << e.what() << std::endl;
		}
		try{
			Form	Formf("formf", 50, 150);
		}
		catch(std::exception &e){
			std::cerr << e.what() << std::endl;
		}
		try{
			Form	Formg("formg", 50, 0);
		}
		catch(std::exception &e){
			std::cerr << e.what() << std::endl;
		}
		try{
			Form	Formh("formh", 50, 1);
		}
		catch(std::exception &e){
			std::cerr << e.what() << std::endl;
		}

		Form	Formd("formd", 1, 5);
		Form	Formh("formh", 50, 1);
		Form	Form9(Formd);
		Bureaucrat	leader("leader", 1);
		leader.signForm(Form9);
		std::cout << Formh << std::endl;
		Formh = Form9;
		std::cout << Formh << std::endl;
	}
	
	{
		std::cout << "--- SIGN ---" << std::endl << std::endl;
		Bureaucrat	leader("leader", 1);
		Bureaucrat	manager("manager", 75);
		Bureaucrat	slave("slave", 150);
		Form	FormA("forma", 20, 5);

		std::cout << std::endl << "main: " << FormA << std::endl;
			slave.signForm(FormA);
		std::cout << std::endl << "main: " << FormA << std::endl;
			manager.signForm(FormA);
		std::cout << std::endl << "main: " << FormA << std::endl;
			leader.signForm(FormA);
		std::cout << std::endl << "main: " << FormA << std::endl;
	}
	
}