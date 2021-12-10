#include "foo.hpp"

#include <iostream>
#include <limits>
#include <random>

namespace foo {

int random_number()
{
	static std::random_device device;
	static std::mt19937 rng(device());
	static std::uniform_int_distribution<int> dist(0, std::numeric_limits<int>::max());

	return dist(rng);
}

void just_a_print()
{
	std::cout << "Just a print to stdout, nothing else\n";
}

} // end namespace foo
