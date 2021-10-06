#include <iostream>

// Emptry structs are valid in C++, not so in C.
struct Empty {
};

int main()
{
	std::cout << sizeof(Empty) << "\n";
}
