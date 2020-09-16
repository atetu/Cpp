/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 16:28:17 by user42            #+#    #+#             */
/*   Updated: 2020/09/16 15:44:59 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>


/*npos is a static member constant value with the greatest possible value 
for an element of type size_t. 
This value, when used as the value for a len (or sublen) parameter 
in string's member functions, means "until the end of the string". 
As a return value, it is usually used to indicate no matches.*/

bool	check_arguments(int argc, char **argv)
{
	std::string string_check;;

	if (argc != 4)
	{
		std::cout << "Error: wrong number of arguments\n";
		return false;
	}
	for (int i = 1; i < 4; i++)
	{
		string_check.append(argv[i]);
		if (string_check.length() == 0)
		{
			std::cout << "Error: empty strings\n";
			return false;
		}
		string_check.clear();
	}
	return true;
}

bool	replace(std::ifstream &file_srcs, std::string s1, std::string s2)
{
	std::string line;
	bool equal = false;
	std::ofstream file_dest("FILENAME.replace");
	size_t len = s1.length();
	if (s1.compare(s2) == 0)
		equal = true;
	if (file_dest)
	{
		while (std::getline(file_srcs, line))
		{
			while (true)
			{
				size_t pos = line.find(s1);
				if (pos != std::string::npos && !equal)
					line.replace(pos, len, s2);
				else
					break;
			}
			file_dest << line << std::endl;
		}
	}
	else
	{
		std::cout << "Error: could not create destination file.\n";
		return false;
	}	
	file_dest.close();
	return true;
}

/* ifstream : input stream class to operate on files*/

int main(int argc, char **argv)
{
	if (!(check_arguments(argc, argv)))
		return (-1);
	std::ifstream file_srcs(argv[1]);
	if(file_srcs)
	{
		if (!(replace(file_srcs, argv[2], argv[3])))
		{
			file_srcs.close();
			return (-1);
		}
		file_srcs.close();
	}
	else
	{
		std::cout << "Error: could not open source file.\n";
		return (-1);
	}
	return (0);
}
