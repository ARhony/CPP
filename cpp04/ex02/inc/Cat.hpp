/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:11:04 by aramon            #+#    #+#             */
/*   Updated: 2023/09/30 00:20:24 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain	*_brain;

	public:
		Cat();
		Cat(const std::string &n);
		Cat(const Cat &c);
		Cat &operator = (const Cat &c);

		void makeSound(void) const;

		~Cat();
};

#endif
