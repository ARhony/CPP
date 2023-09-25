/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:06:51 by aramon            #+#    #+#             */
/*   Updated: 2023/09/20 14:32:18 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
	private:

		std::string	name;

	public:

		Zombie();
		~Zombie();

		void	announce(void);

		std::string GetName() const;
		void		SetName(const std::string& name);
		Zombie*		newZombie(std::string name);
		void		randomChump(std::string name);
};

#endif
