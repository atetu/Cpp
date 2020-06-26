#include "Logger.hpp"

int main()
{
	Logger logger("file");
	logger.log("console", "this is an example");
	logger.log("console", "this is a second  example");
	logger.log("file", "this is an example");
	logger.log("file", "this is a second  example");
	logger.log("wrong_dest", "this is a second  example");
}
