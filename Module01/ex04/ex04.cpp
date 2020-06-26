#include <string>
#include <iostream>

int main(void)
{
	std::string str;
	str = "HI THIS IS BRAIN\n";
	std::string &reference(str);
//	std::string &reference = str;
	std::string *ptr;
	ptr = &str;
	std::cout << "str: " << str;
	std::cout << "ref: " << reference;
	std::cout << "ptr:" << *ptr;
}
