#include "ShrubberyCreationForm.hpp"

std::string const ShrubberyCreationForm::_tree[17] = {
"	       *\n",
"	      ***\n",
"	     *****\n",
"	    *******\n",
"	    o  *  0 \n",
"	     *****\n",
"          *********\n",
"	 *************\n",
"      *******************\n",
"      o       *         o\n",
"          *********\n",
"   ************************\n",
" *****************************\n",
"********************************\n",
"	       ||\n",
"	       ||\n",
"	       ||\n"
};

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : Form("Shrubbery Creation Form", 145, 137), _target(target)
{
}


ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &to_copy) : Form(to_copy), _target(to_copy._target)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &to_copy)
{
	if (this == &to_copy)
		return (*this);
	Form::operator=(to_copy);
	return (*this);
}

void ShrubberyCreationForm::action() const
{
	std::stringstream concatenation;
	concatenation << _target << "_shrubbery";
	std::string const file_name = concatenation.str();
	std::ofstream out(file_name.c_str());
	if (out)
	{
		for (int nb_trees = 0; nb_trees < 3; nb_trees++)
			for (int i = 0; i < 17; i++)
				out << _tree[i];
	}
	else
	{
		std::cout << "Error ~ could not create file\n";
	}
}
