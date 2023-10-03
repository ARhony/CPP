/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 21:26:37 by aramon            #+#    #+#             */
/*   Updated: 2023/09/21 10:22:53 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact			contacts[8];
		int				iSizeCurrent;
		int				iSizeMax;
		int				iOldestIndex;

	public:
		PhoneBook();
		void 			add();
		void			search();
		~PhoneBook();
};

#endif
