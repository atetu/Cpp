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
		void logToConsole(std::string const &s);
		void logToFile(std::string const &s);
		std::string makeLogEntry(std::string const &s);
		std::string name_file;
};
#endif
