/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 11:55:52 by aramon            #+#    #+#             */
/*   Updated: 2023/09/24 09:10:04 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>

int		err(const std::string& err_mess)
{
	std::cerr << err_mess << std::endl;
	return (1);
}

int		main(int ac, char **av)
{
	Harl			harl;
	std::string		arg;

	if (ac != 2)
		return (err("Usage ./harlFilter [debug/info/warning/error]"));
	arg = (std::string)av[1];
	if (av[1] && (arg != "debug" && arg != "error" && arg != "warning" && arg != "info"))
		return (err("Usage ./harlFilter [debug/info/warning/error]"));
	harl.complain(av[1]);
	return (0);
}
