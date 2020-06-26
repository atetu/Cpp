#include<iostream>
#include<sstream>
#include "Eval.hpp"

int main()
{
	std::cout << "56*6+20/(10-86) = ";
	Eval eval("56*6+20/(10-86)");
	eval.parsing();
	std::cout << "expected result : 335.7368" << std::endl;
	std::cout << "(59-3*(10/2))+58 = ";
	Eval eval2("(59-3*(10/2))+58");
	eval2.parsing();
	std::cout << "expected result : 102" << std::endl;

}
