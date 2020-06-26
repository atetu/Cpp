#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat bob("bob",51);
	std::cout << bob;

	Form c412("c412", 42, 30);
	std::cout << c412;
	bob.signForm(c412);

	Form c318("c318", 80, 100);
	std::cout << c318;
	bob.signForm(c318);

}
