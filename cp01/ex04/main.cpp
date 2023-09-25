/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:28:02 by aramon            #+#    #+#             */
/*   Updated: 2023/09/22 20:56:53 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int		err(const std::string& str)
{
	std::cerr << str << std::endl;
	return (1);
}

std::string	replaceOccurrence(const std::string& line, const std::string& s1, const std::string& s2)
{
	std::string		result;
	size_t			pos = 0;
	size_t			lastPos = 0;

	while ((pos = line.find(s1, lastPos)) != std::string::npos)
	{
		result += line.substr(lastPos, pos - lastPos);
		result += s2;
		lastPos = pos + s1.size();
	}

	result += line.substr(lastPos);
	return result;
}

void	replaceInput(std::ifstream& input, std::ofstream& output, char **argv)
{
	std::string	line;
	std::string	occu;

	while (std::getline(input, line))
	{
		occu = replaceOccurrence(line, std::string(argv[2]), std::string(argv[3]));
		output << occu << '\n';
	}
}

int		main(int argc, char **argv)
{
	std::ifstream	input;
	std::string		output_name;

	if (argc != 4)
		return (err("Bad arguments\n"));

	input.open(argv[1]);
	if (!input)
		return (err("Couldn't open input file\n"));

	output_name = (std::string)argv[1] + ".replace";
	std::ofstream	output(output_name);
	if (!output)
		return (err("Couldn't open output file\n"));

	replaceInput(input, output, argv);

	input.close();
	output.close();

	return (0);
}
