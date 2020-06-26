#include<iostream>
#include "Array.hpp"

int main()
{
	std::cout << "---------INT (3)---------" << std::endl;
	Array<int> array_int(3);
	std::cout << "Size:" << array_int.size() <<  std::endl;
	std::cout << "Values: ";
	for (size_t i = 0; i < array_int.size() ; i++)
		std::cout << array_int[i] << " ";
	std::cout << "\n\n---------STRING (2)---------" << std::endl;
	Array<std::string>array_str(2);
	array_str[0] = "coucou";
	array_str[1] = "hello";
	std::cout << "Size: " << array_str.size() <<  std::endl;
	std::cout << "Values: ";
	for (size_t i = 0; i < array_str.size() ; i++)
		std::cout << array_str[i] << " ";

	std::cout << "\n\n---------DOUBLE (5)---------" << std::endl;
	Array<double> array_double(5);
	std::cout << "Size: " << array_double.size() <<  std::endl;
	std::cout << "Values: ";
	for (size_t i = 0; i < array_double.size() ; i++)
		std::cout << array_double[i] << " ";

	std::cout << "\n\n---------FLOAT (0)---------" << std::endl;
	Array<float> array_float(0);
	std::cout << "Size: " << array_float.size() <<  std::endl;
	std::cout << "Values: ";
	for (size_t i = 0; i < array_float.size() ; i++)
		std::cout << array_float[i] << " ";

	std::cout << "\n\n---------EXCEPTION ~ INT (2)---------" << std::endl;

	std::cout << "Size:" << array_int.size() <<  std::endl;
	std::cout << "Values: ";
	for (size_t i = 0; i < array_int.size() ; i++)
		std::cout << array_int[i] << " ";

	std::cout << "Value of index 5: " << std::endl;
	array_int[5] = 5;
}
