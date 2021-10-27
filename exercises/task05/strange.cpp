#include <iostream>

int array[5] = {};

bool contains(int v)
{
	for (int i = 0; i <= 5; ++i) {
		if (array[i] == v) {
			return true;
		}
	}
	return false;
}

int main()
{
	for (int i = 0; i < 10; ++i) {
		auto contains_text = contains(i) ? "contains " : "does not contain ";
		std::cout << "array " << contains_text << i << std::endl;
	}

	std::cout << "done" << std::endl;
}
