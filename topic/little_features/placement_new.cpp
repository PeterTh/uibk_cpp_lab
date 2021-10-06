#include <cstdlib>
#include <iostream>

struct Point {
	Point(float x, float y) : x(x), y(y) { std::cout << "Constructed at address: " << this << "\n"; }
	~Point() { std::cout << "Deconstructed at address: " << this << "\n"; }
	float x, y;
};

int main()
{
	auto memory = malloc(sizeof(Point));

	// Construct a point at a specific location.
	Point *p = new (memory) Point(1.0f, 2.0f);

	std::cout << "x: " << p->x << "\n";

	// Need to manually invoke the destructor.
	p->~Point();

	free(memory);
}
