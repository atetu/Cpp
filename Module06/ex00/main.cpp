#include <iostream>
#include <sstream>
#include <string>
#include "Convert.hpp"

/*template<typename T>
   T StringToNumber(const std::string& numberAsString)
   {
      T valor;

      std::stringstream stream(numberAsString);
      stream >> valor;
      if (stream.fail()) {
         std::runtime_error e(numberAsString);
         throw e;
      }
      return valor;
   }
*/

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments\n";
		return (0);
	}
	Convert convert(argv[1]);
	convert.parsing();
	convert.redirection();
	return (0);
}
