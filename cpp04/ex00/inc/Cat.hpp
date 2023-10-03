/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:11:04 by aramon            #+#    #+#             */
/*   Updated: 2023/09/29 20:14:51 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	private:

	public:

		Cat();
		Cat(const std::string &n);
		Cat(const Cat &c);
		Cat &operator = (const Cat &c);

		void makeSound(void) const;

		~Cat();
};

#endif
