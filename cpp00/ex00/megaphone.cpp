/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 20:28:38 by aramon            #+#    #+#             */
/*   Updated: 2023/09/25 20:05:33 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

static void	print(int ac, char **av)
{
	int	i = 1;

	while (i < ac)
	{
		int	j = 0;
		while (av[i][j])
		{
			std::cout << (char)std::toupper(av[i][j]);
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
		print(ac, av);
	return (0);
}
