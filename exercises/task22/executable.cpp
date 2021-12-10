#include <iostream>

#include "foo.hpp"

int main()
{
	std::cout << "Random Number: " << foo::random_number() << "\n\n";
	foo::just_a_print();
}
