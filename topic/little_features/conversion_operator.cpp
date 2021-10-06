#include <cassert>

struct Vec3 {
	float x, y, z;
};

struct Vec2 {
	float x, y;
	operator Vec3() const { return Vec3{x, y, 0}; }
};

int main()
{
	Vec2 v2{1, 2};

	Vec3 v3 = v2;

	assert(v3.x == 1 && v3.y == 2 && v3.z == 0);
}
