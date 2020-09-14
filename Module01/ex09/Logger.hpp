/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 17:01:48 by user42            #+#    #+#             */
/*   Updated: 2020/09/14 17:11:52 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

class Logger 
{
	public:
		Logger(std::string name);
		void log(std::string const &dest, std::string const &message);

	private:
		void logToConsole(std::string &s);
		void logToFile(std::string &s);
		std::string makeLogEntry(std::string const &s);
		std::string name_file;
};
#endif
