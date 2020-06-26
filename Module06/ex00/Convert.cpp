#include "Convert.hpp"


static std::string _float_string[3] = {
	"nanf",
	"-inff",
	"+inff"
};

static std::string _double_string[3] = {
	"nan",
	"-inf",
	"+inf"
};


Convert::Convert() 
{
}

Convert::Convert(std::string value) : _value(value), _value_int(0), _value_float(0), _value_double(0), _value_char (0), _non_displayable(0), type(_none)
{
	for (int i = 0; i < 4; i++)
		_impossible[i] = 0;
}


Convert::~Convert()
{
}

Convert::Convert(Convert const &to_copy) : _value(to_copy._value), _value_int(to_copy._value_int), _value_float(to_copy._value_float), _value_char(to_copy._value_char), _non_displayable(to_copy._non_displayable), type(to_copy.type)
{
	for (int i = 0; i < 4; i++)
		_impossible[i] = to_copy._impossible[i];
}

Convert &Convert::operator=(Convert const &to_copy)
{
	_value_int = to_copy._value_int;
       	_value_float = to_copy._value_float;
	_value_char = to_copy._value_char;
	_non_displayable = to_copy._non_displayable;
       	type = to_copy.type;

	return (*this);
}


void Convert::parsing()
{
	for (int i = 0; i < 3; i++)
	{
		if (_value.compare(_float_string[i]) == 0)
		{
			type = _float;
			_impossible[0] = 1;
			_impossible[1] = 1;
			_value = _double_string[i];
			return;
		}
		if (_value.compare(_double_string[i]) == 0)
		{
			type = _double;
			_impossible[0] = 1;
			_impossible[1] = 1;
			return;
		}
	}
	if (_value.size() == 1 && !(isdigit(_value[0])))
	{
		try
		{
			if (_value[0] > 31 && _value[0] < 127)
				type = _char;
			else
				throw Error();
		}
		catch (std::exception const &e)
		{
			std::cerr << e.what();
		}
			return;
	}
	for (size_t i = 0; i < _value.size() ; i++)
	{
		try
		{
			if (_value[i] == '-' && i != 0)
			{
				throw Error();
			}
			else if (_value[i] == '.' && _double == 1)
				throw Error();
			else if (_value[i] == '.')
				type = _double;
			else if (_value[i] == 'f' && i == _value.size() - 1)
			{
				type = _float;
				_value[_value.size() - 1] = 0;
			}
			else if (!isdigit(_value[i]) && (!(_value[i] == '-' && i == 0)))
				throw Error();
			else if (i == _value.size() - 1 && type != _double)
			{
				std::stringstream stream(_value);
				double n;
				stream >> n;
				if (n < std::numeric_limits<int>::min() || n > std::numeric_limits<int>::max())
					type = _double;
				else
					type = _int;
			}
		}
		catch (std::exception const &e)
		{
			std::cerr << e.what();
			return;
		}
	}
}

void Convert::redirection()
{
	std::stringstream stream(_value);
	switch (type)
	{
		case _char:
			{
				stream >> _value_char;
				FromChar();
				break;
			}
		case _int:
			{
				stream >> _value_int;
				FromInt();
				break;
			}
		case _float:
			{
				stream >> _value_float;
				std::stringstream stream2(_value);
				stream2 >> _value_double;
				FromFloat();
				break;
			}
		case _double:
			{
				stream >> _value_double;
				FromDouble();
				break;
			}
	}
}

void Convert::FromChar()
{
	_value_int = static_cast<int>(_value_char);
	_value_float = static_cast<float>(_value_char);
	_value_double = static_cast<double>(_value_char);
	checkValues();
}

void Convert::FromInt()
{
	_value_char = static_cast<int>(_value_int);
	_value_float = static_cast<float>(_value_int);
	_value_double = static_cast<double>(_value_int);
	checkValues();
}

void Convert::FromDouble()
{
	_value_char = static_cast<int>(_value_double);
	_value_int = static_cast<int>(_value_double);
	_value_float = static_cast<float>(_value_double);
	checkValues();
}

void Convert::FromFloat()
{
	_value_char = static_cast<int>(_value_double);
	_value_int = static_cast<int>(_value_double);
	checkValues();
}

void Convert::checkValues()
{
	if (_value_double < std::numeric_limits<unsigned char>::min() || _value_double > std::numeric_limits<unsigned char>::max() || _impossible[0] == 1)
		_impossible[0] = 1;
	else if (_value_char < 31 || _value_char > 126)
		_non_displayable = 1;
	if (_value_double < std::numeric_limits<int>::min() || _value_double > std::numeric_limits<int>::max() || _impossible[1] == 1)
		_impossible[1] = 1;
	print();
}

void Convert::print()
{
	std::cout << "char: ";
	if (_impossible[0] == 1)
		std::cout << "impossible\n";
	else if (_non_displayable)
		std::cout << "Non displayable\n";
	else
		std::cout << "'" <<_value_char << "'\n";
	std::cout << "int: ";
	if (_impossible[1] == 1)
		std::cout << "impossible\n";
	else
		std::cout << _value_int << "\n";
	if (_value.compare("+inff") == 0 || _value.compare("+inf") == 0)
	{
		std::cout << "float: +" << std::fixed << std::setprecision(1) << _value_float << "f\n";
		std::cout << "double: +" << std::setprecision(2) << _value_double << "\n";
	}
	else
	{
		std::cout << "float: " << std::fixed << std::setprecision(1) << _value_float << "f\n";
		std::cout << "double: " << std::setprecision(2) << _value_double << "\n";
	}

}

void Convert::getInt()
{
	std::cout << _int << "\n";
}
void Convert::getDouble()
{
	std::cout << _double << "\n";
}
void Convert::getFloat()
{
	std::cout << _float << "\n";
}
void Convert::getChar()
{
	std::cout << _char << "\n";
}

Convert::Error::Error() throw () {}

Convert::Error::~Error() throw () {}

Convert::Error::Error(Error const &to_copy) throw ()
{
	(void)to_copy;
}

Convert::Error &Convert::Error::operator=(Error const &to_copy) throw () 
{
	return (*this);
}

const char* Convert::Error::what() const throw() 
{ 
	return ("Error ~ Incorrect value\n"); 
}
