/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 00:55:34 by aramon            #+#    #+#             */
/*   Updated: 2023/10/03 01:13:09 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <exception>
# include <iostream>
# include <string>

class	Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &bureaucrat);
		~Bureaucrat(void);

		Bureaucrat	&operator=(const Bureaucrat &bureaucrat);

		std::string	getName(void) const;
		int			getGrade(void) const;
		void		incrementGrade(void);
		void		decrementGrade(void);

		class		GradeTooHighException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

		class		GradeTooLowException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

	private:
		const std::string	_name;
		int					_grade;
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif
