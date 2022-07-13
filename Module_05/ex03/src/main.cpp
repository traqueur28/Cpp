 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 10:16:28 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/13 09:42:25 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/Bureaucrat.hpp"
#include "../class/PresidentialPardonForm.hpp"
#include "../class/RobotomyRequestForm.hpp"
#include "../class/ShrubberyCreationForm.hpp"
#include "../class/Intern.hpp"

int	main()
{
	std::cout << std::endl << "--- INTERN ---" << std::endl << std::endl;
	{
		Intern a;
		Intern b(a);
		Intern c;
		// Form	*tmp;

		std::cout << std::endl << "shrubbery" << std::endl;
		delete a.makeForm("shrubbery creation", "garden");
		

		std::cout << std::endl << "robotomy" << std::endl;
		delete a.makeForm("robotomy request", "something");
		

		std::cout << std::endl << "presidential" << std::endl;
		delete a.makeForm("presidential pardon", "world");

		std::cout << std::endl << "other" << std::endl;
		a.makeForm("other", "target");
		std::cout << std::endl;

		try
		{
			Bureaucrat	leader("leader", 1);
			Form		*temp;
			
			std::cout << std::endl;
			temp = a.makeForm("shrubbery creation", "garden");
			std::cout << std::endl;
			leader.signForm(*temp);
			std::cout << std::endl;
			leader.executeForm(*temp);
			delete temp;
		}
		catch (const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}