#include "Bureaucrat.hpp"

int main()
{
	std::cout << "Attempt to create Bob, grade 51: \n";
	Bureaucrat bob("bob",51);
	std::cout << bob;
	
	std::cout << "\nAttempt to create Jim, grade 0: \n";
	Bureaucrat jim("jim",0);
	
	std::cout << "\nAttempt to create Tom, grade 151: \n";
	Bureaucrat tom("tom",151);

	std::cout << "\nCreation of bob2, copy of bob\n";
	Bureaucrat bob2(bob);
	std::cout << bob2;

	std::cout << "\nCreation of harry (grade: 1) and freddy (grade: 149)\n";
	Bureaucrat harry("harry",1);
	Bureaucrat freddy("freddy",149);
	
	std::cout << harry;
	std::cout << "Increase of harry's grade : ";
	harry.increaseGrade();
	std::cout << freddy;
	std::cout << "Decrease of freddy's grade : ok\n";
	freddy.decreaseGrade();
	std::cout << "freddy's new grade: " << freddy.getGrade() << "\n";
	std::cout << "Decrease of freddy's grade for the second time : \n";
	freddy.decreaseGrade();
}
