/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 23:29:33 by aramon            #+#    #+#             */
/*   Updated: 2023/09/21 10:40:42 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
	private:

		int				index;
		std::string		first_name;
		std::string		last_name;
		std::string		nickname;
		std::string		phone_number;
		std::string		darkest_secret;

	public:

		Contact();

		void			setIndex(const int& i);
		void			setFirstName(const std::string& str);
		void			setLastName(const std::string& str);
		void			setNickName(const std::string& str);
		void			setPhoneNumber(const std::string& str);
		void			setDarkestSecret(const std::string& str);

		int				getIndex() const;
		std::string		getFirstName() const;
		std::string		getLastName() const;
		std::string		getNickName() const;
		std::string		getPhoneNumber() const;
		std::string		getDarkestSecret() const;

		~Contact();
};

#endif
