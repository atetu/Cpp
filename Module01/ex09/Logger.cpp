#include "Logger.hpp"

Logger::Logger(std::string name) : name_file(name)
{
}

void Logger::logToConsole(std::string const &s)
{
	std::cout << s << std::endl;
}

void Logger::logToFile(std::string const &s)
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
	dt[dt.size() -1] = 0;
	std::string log;
	log = "[" + dt + "] - " + s + "\n";
	return log;
}

void Logger::log(std::string const &dest, std::string const &message)
{
	try
	{
	int destination;
	destination = dest == "file" ? 0:
		dest == "console"? 1:
		throw "Invalid destination\n";
	void (Logger::* const func[2])(std::string const &message) =
	{
		&Logger::logToFile,
		&Logger::logToConsole
	};
	(this->*func[destination])(message);
	}
	catch (char const *e)
	{
		std::cout << e;
	}
}
