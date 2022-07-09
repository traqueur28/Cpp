/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 10:16:28 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/09 13:10:15 by jgourlin         ###   ########.fr       */
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
	
}