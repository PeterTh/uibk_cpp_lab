#include <cstdlib>
#include <iostream>

#include "mylib/foo.hpp"

int main()
{
	std::cout << mylib::foo() << "\n";
	return EXIT_SUCCESS;
}
