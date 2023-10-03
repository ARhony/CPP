/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 11:56:31 by aramon            #+#    #+#             */
/*   Updated: 2023/09/24 09:04:14 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Harl
{
	typedef void (Harl::*HarlFunc)(void);

	private :

		void debug(void);
		void info(void);
		void warning(void);
		void error(void);

	public :

		Harl();
		~Harl();
		void complain(std::string level);

};
