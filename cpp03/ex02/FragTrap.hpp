/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:34:46 by aramon            #+#    #+#             */
/*   Updated: 2023/09/26 18:11:41 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private :

		FragTrap();

	public :

		FragTrap(const std::string& name);
		FragTrap(const FragTrap& frag);
		FragTrap &operator = (const FragTrap& frag);

		void	highFivesGuys(void);

		~FragTrap();
};

#endif
