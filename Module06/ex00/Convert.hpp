/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 15:41:57 by user42            #+#    #+#             */
/*   Updated: 2020/09/28 19:37:51 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <exception>
#include <limits>
#include <cmath>

class Convert
{
	public:
		Convert(std::string value);
		~Convert();
		Convert(Convert const &);
		Convert &operator=(Convert const &to_copy);
		bool conv();
		void printChar();
		void printInt();
		void printFloat();
		void printDouble();
	
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
		double _value_double;
};
#endif
