/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 17:01:37 by user42            #+#    #+#             */
/*   Updated: 2020/09/14 17:13:18 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

Logger::Logger(std::string name) : name_file(name)
{
}

void Logger::logToConsole(std::string &s)
{
	std::cout << s << std::endl;
}

void Logger::logToFile(std::string &s)
{
	std::ofstream flux(name_file.c_str(), std::ios::app);
	if (flux)
		flux << s << std::endl;
	else
		std::cout << "Error: could not open file.\n";
}

std::string Logger::makeLogEntry(std::string const &s)
{
	time_t tmm = time(0);
	std::string dt = ctime(&tmm);
	dt[dt.size() - 1] = 0;
	std::string log;
	log = "[" + dt + "] - " + s;
	return log;
}

void Logger::log(std::string const &dest, std::string const &message)
{
	std::string log;
	log = Logger::makeLogEntry(message);
	try
	{
		int destination;
		destination = dest == "file" ? 0:
			dest == "console"? 1:
			throw "Invalid destination\n";
		
		void (Logger::* const func[2])(std::string &s) =
		{
			&Logger::logToFile,
			&Logger::logToConsole
		};
		
		(this->*func[destination])(log);
	}
	catch (char const *e)
	{
		std::cout << e;
	}
}
