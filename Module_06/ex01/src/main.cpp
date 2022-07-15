/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 10:22:00 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/15 10:46:57 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/serialize.hpp"

uintptr_t	serialize(Data *ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw){
	return (reinterpret_cast<Data *>(raw));
}

int	main()
{
	Data	alpha;
	Data	*ret = NULL;
	uintptr_t	raw;

	alpha.A = 42;
	alpha.A = -42;

	std::cout << "alpha.A: " << alpha.A << std::endl;
	std::cout << "alpha.B: " << alpha.B << std::endl << std::endl;

	std::cout << "alphaPTR = " << &alpha << std::endl;
	std::cout << "retPTR   = " << ret << std::endl;

	std::cout << "--- SERIALIZE ---"<< std::endl;
	raw = serialize(&alpha);

	std::cout << "alphaPTR = " << &alpha << std::endl;
	std::cout << "RawPTR   = " << &raw << std::endl << std::endl;

	std::cout << "--- DESERIALIZE ---"<< std::endl;
	ret = deserialize(raw);

	std::cout << "alphaPTR = " << &alpha << std::endl;
	std::cout << "RawPTR   = " << &raw << std::endl << std::endl;
	std::cout << "retPTR   = " << ret << std::endl;

	std::cout << "alpha.A: " << alpha.A << std::endl;
	std::cout << "alpha.B: " << alpha.B << std::endl << std::endl;

	std::cout << "ret-> A: " << ret->A << std::endl;
	std::cout << "ret-> B: " << ret->B << std::endl << std::endl;

	return (0);
}