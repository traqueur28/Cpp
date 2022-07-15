/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 10:16:28 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/13 10:58:48 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/Bureaucrat.hpp"
#include "../class/PresidentialPardonForm.hpp"
#include "../class/RobotomyRequestForm.hpp"
#include "../class/ShrubberyCreationForm.hpp"

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
			std::cout << e.what() << std::endl;
		}
		try{
			Bureaucrat	delta("delta", 151);	
		}
		catch (std::exception &e){
			std::cout << e.what() << std::endl;
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
			std::cout << e.what() << std::endl;
		}
		try{
			manager.promote();
		}
		catch(std::exception &e){
			std::cout << e.what() << std::endl;
		}
		try{
			slave.promote();
		}
		catch(std::exception &e){
			std::cout << e.what() << std::endl;
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
			std::cout << e.what() << std::endl;
		}
		try{
			manager.retrograde();
		}
		catch(std::exception &e){
			std::cout << e.what() << std::endl;
		}
		try{
			slave.retrograde();
		}
		catch(std::exception &e){
			std::cout << e.what() << std::endl;
		}
		std::cout << leader << std::endl;
		std::cout << manager << std::endl;
		std::cout << slave << std::endl;
	}
	std::cout << std::endl << "--- FORM ---" << std::endl << std::endl;
	{
		std::cout << "--- SIGN CREA---" << std::endl;
		PresidentialPardonForm	FormA("world");
		RobotomyRequestForm		FormB("something");
		ShrubberyCreationForm	FormC("garden");

		//Form	fail("name", 128, 42);//Doesn't work cause function pure virtual
	}
	
	{
		std::cout << "--- SIGN ---" << std::endl << std::endl;
		Bureaucrat	leader("leader", 1);
		Bureaucrat	manager("manager", 75);
		Bureaucrat	slave("slave", 150);
		PresidentialPardonForm	FormA("World");
		RobotomyRequestForm		FormB("something");
		ShrubberyCreationForm	FormC("garden");

		std::cout << "--- TRY EXECUTE NOT SIGNED ---" << std::endl << std::endl;
		std::cout << "--- PRESIDENT ---" << std::endl << std::endl;

		std::cout << std::endl << "main: " << FormA << std::endl;
			slave.executeForm(FormA);
		std::cout << std::endl << "main: " << FormA << std::endl;
			manager.executeForm(FormA);
		std::cout << std::endl << "main: " << FormA << std::endl;
			leader.executeForm(FormA);
		std::cout << std::endl << "main: " << FormA << std::endl;

		std::cout << "--- ROBOTOMY ---" << std::endl << std::endl;

		std::cout << std::endl << "main: " << FormB << std::endl;
			slave.executeForm(FormB);
		std::cout << std::endl << "main: " << FormB << std::endl;
			manager.executeForm(FormB);
		std::cout << std::endl << "main: " << FormB << std::endl;
			leader.executeForm(FormB);
		std::cout << std::endl << "main: " << FormB << std::endl;

		std::cout << "--- TREE ---" << std::endl << std::endl;

		std::cout << std::endl << "main: " << FormC << std::endl;
			slave.executeForm(FormC);
		std::cout << std::endl << "main: " << FormC << std::endl;
			manager.executeForm(FormC);
		std::cout << std::endl << "main: " << FormC << std::endl;
			leader.executeForm(FormC);
		std::cout << std::endl << "main: " << FormC << std::endl;


		std::cout << "--- TRY SIGN ---" << std::endl << std::endl;
		std::cout << "--- PRESIDENT ---" << std::endl << std::endl;

		std::cout << std::endl << "main: " << FormA << std::endl;
			slave.signForm(FormA);
		std::cout << std::endl << "main: " << FormA << std::endl;
			manager.signForm(FormA);
		std::cout << std::endl << "main: " << FormA << std::endl;
			leader.signForm(FormA);
		std::cout << std::endl << "main: " << FormA << std::endl;

		std::cout << "--- ROBOTOMY ---" << std::endl << std::endl;

		std::cout << std::endl << "main: " << FormB << std::endl;
			slave.signForm(FormB);
		std::cout << std::endl << "main: " << FormB << std::endl;
			manager.signForm(FormB);
		std::cout << std::endl << "main: " << FormB << std::endl;
			leader.signForm(FormB);
		std::cout << std::endl << "main: " << FormB << std::endl;

		std::cout << "--- TREE ---" << std::endl << std::endl;

		std::cout << std::endl << "main: " << FormC << std::endl;
			slave.signForm(FormC);
		std::cout << std::endl << "main: " << FormC << std::endl;
			manager.signForm(FormC);
		std::cout << std::endl << "main: " << FormC << std::endl;
			leader.signForm(FormC);
		std::cout << std::endl << "main: " << FormC << std::endl;

		std::cout << "--- TRY EXECUTE SIGNED ---" << std::endl << std::endl;
		std::cout << "--- PRESIDENT ---" << std::endl << std::endl;

		std::cout << std::endl << "main: " << FormA << std::endl;
			slave.executeForm(FormA);
		std::cout << std::endl << "main: " << FormA << std::endl;
			manager.executeForm(FormA);
		std::cout << std::endl << "main: " << FormA << std::endl;
			leader.executeForm(FormA);
		std::cout << std::endl << "main: " << FormA << std::endl;

		std::cout << "--- ROBOTOMY ---" << std::endl << std::endl;

		std::cout << std::endl << "main: " << FormB << std::endl;
			slave.executeForm(FormB);
		std::cout << std::endl << "main: " << FormB << std::endl;
			manager.executeForm(FormB);
		std::cout << std::endl << "main: " << FormB << std::endl;
			leader.executeForm(FormB);
		std::cout << std::endl << "main: " << FormB << std::endl;

		std::cout << "--- TREE ---" << std::endl << std::endl;

		std::cout << std::endl << "main: " << FormC << std::endl;
			slave.executeForm(FormC);
		std::cout << std::endl << "main: " << FormC << std::endl;
			manager.executeForm(FormC);
		std::cout << std::endl << "main: " << FormC << std::endl;
			leader.executeForm(FormC);
		std::cout << std::endl << "main: " << FormC << std::endl;
	}
	
}