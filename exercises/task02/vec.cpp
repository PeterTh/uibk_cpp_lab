class Vec3 {
  public:
	Vec3() = default;
	Vec3(int x, int y, int z) : x(x), y(y), z(z) {}

  private:
	int x = 0;
	int y = 0;
	int z = 0;
};

int main()
{
	Vec3 v0;
	Vec3 v1();
	Vec3 v2(1, 2, 3);
	Vec3 v3{1, 2, 3};
	Vec3 v4 = {1, 2, 3};

	auto v5 = Vec3{};
	auto v6 = Vec3(1, 2, 3);
	auto v7 = Vec3{1, 2, 3};
}
