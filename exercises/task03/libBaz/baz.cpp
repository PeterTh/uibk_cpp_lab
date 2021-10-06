#include "baz.hpp"

#include <iostream>

#include "bar.hpp"

void baz()
{
	bar();
	std::cout << "Function baz called" << std::endl;
}
