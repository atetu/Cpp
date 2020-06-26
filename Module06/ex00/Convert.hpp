#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <exception>

class Convert
{
	public:
		Convert(std::string value);
		~Convert();
		Convert(Convert const &);
		Convert &operator=(Convert const &to_copy);
		void parsing();
		void redirection();
		void FromChar();
		void FromInt();
		void FromFloat();
		void FromDouble();
		void print();
		void checkValues();
		void getInt();
		void getFloat();
		void getDouble();
		void getChar();

	class Error : public std::exception
	{
		public:
			Error() throw();
			~Error() throw();
			Error(Error const &) throw();
			Error &operator=(Error const &to_copy) throw();
			virtual const char* what() const throw();
	};		

	private:
		Convert();
		std::string _value;
		int _value_int;
		float _value_float;
		double _value_double;
		char _value_char;
		int _impossible[4];
		int _non_displayable;
		int type;
		enum _type{
			_char,
			_int,
			_float,
			_double,
			_none
		};
};
#endif
