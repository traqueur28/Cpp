/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 13:23:37 by jgourlin          #+#    #+#             */
/*   Updated: 2022/04/04 13:53:49 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	ft_upper(char *s)
{
	for (int i = 0; s[i]; s++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		std::cout << s[i];
		
	}
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int i = 1; i < argc; i++)
			ft_upper(argv[i]);
	std::cout << std::endl;
	return (0);
}