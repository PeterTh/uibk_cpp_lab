#include <algorithm>
#include <array>
#include <execution>
#include <iostream>

int main()
{
	std::vector<int> numbers;
	for (auto i = 0; i < 1000; i++) {
		numbers.push_back(i);
	}

	// Output should be malformed since there is no synchronization in place.
	std::for_each(std::execution::par, numbers.begin(), numbers.end(), [](int i) { std::cout << i << "\n"; });
}
