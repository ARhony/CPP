/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:07:28 by aramon            #+#    #+#             */
/*   Updated: 2023/09/30 00:20:35 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	AANIMAL_HPP
# define AANIMAL_HPP

#include <string>
#include <iostream>
#include "Brain.hpp"

class AAnimal
{
	protected:

		std::string		_type;

	public:

		AAnimal();
		AAnimal(const std::string &type);
		AAnimal(const AAnimal &a);
		AAnimal &operator = (const AAnimal &a);

		virtual const std::string	getType(void) const;
		virtual void				makeSound(void) const = 0;

		virtual ~AAnimal();
};

#endif
