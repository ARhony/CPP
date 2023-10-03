/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 20:51:05 by aramon            #+#    #+#             */
/*   Updated: 2023/09/26 18:57:55 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap clap1("CLTP1");
	ClapTrap clap2("CLTP2");

	clap1.attack("CLTP2");
	clap2.takeDamage(5);
	clap2.beRepaired(3);

	return (0);
}
