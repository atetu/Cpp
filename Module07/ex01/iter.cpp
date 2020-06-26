#include<iostream>
#include<string>

template <typename T>void iter(T *array, size_t size, void (*func)(T &f))
{
	for (size_t i = 0; i < size; i++)
		(*func)(array[i]);
}

template <typename T>void add(T &x)
{
	x += 1;
}



int main()
{
	int array_int[4] = {3, 564, -9, 87};
	float array_float[5] = {62.3, 564.5, -9, 87, 54.236};
	double array_double[2] = {6544, -562.30};

	std::cout << "INT" << std::endl;
	std::cout << "initial array : ";
	for (int i = 0; i < 4; i++)
		std::cout << array_int[i] << " ";
	std::cout << "\narray after iter: ";
	iter(array_int, 4, &add);
	for (int i = 0; i < 4; i++)
		std::cout << array_int[i] << " ";
	
	std::cout << "\nFLOAT" << std::endl;
	std::cout << "initial array : ";
	for (int i = 0; i < 5; i++)
		std::cout << array_float[i] << " ";
	std::cout << "\narray after iter: ";
	iter(array_float, 5, &add);
	for (int i = 0; i < 5; i++)
		std::cout << array_float[i] << " ";
	
	std::cout << "\nDOUBLE" << std::endl;
	std::cout << "initial array : ";
	for (int i = 0; i < 2; i++)
		std::cout << array_double[i] << " ";
	std::cout << "\narray after iter: ";
	iter(array_double, 2, &add);
	for (int i = 0; i < 2; i++)
		std::cout << array_double[i] << " ";
	std::cout << std::endl;
	return 0;
}
