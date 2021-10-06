#include <cassert>

struct Point {
	float x, y;
};

struct Rect {
	Point tl, br;
	float area() const { return (br.x - tl.x) * (br.y - tl.y); }
};

class IShape {
  public:
	virtual float area() const { assert(false); };
	virtual ~IShape() {}
};

class Square : public IShape {
  public:
	Square(float extend) : m_extend(extend) {}
	float area() const override { return m_extend * m_extend; }

  private:
	float m_extend;
};

int main()
{
	Rect r1{{1, 1}, {4, 4}};
	assert(r1.area() == 9.0f);

	Rect *r1_ptr = &r1;
	assert(r1_ptr->area() == 9.0f);

	// pointer to member variable
	auto tl_mem_ptr = &Rect::tl; // Point Rect::*tl_mem_ptr

	assert((r1.*tl_mem_ptr).x == 1.0f);

	assert((r1_ptr->*tl_mem_ptr).x == 1.0f);

	// pointer to member function
	auto area_memfn_ptr = &Rect::area; // float (Rect::*area_memfn_ptr)() const

	assert((r1.*area_memfn_ptr)() == 9.0f);

	assert((r1_ptr->*area_memfn_ptr)() == 9.0f);

	// Virtual
	Square square{2.0f};
	IShape *shape_ptr = &square;

	// virtual member function pointer
	auto virt_area_memfn_ptr = &IShape::area; // float (IShape::*virt_area_memfn_ptr)() const

	assert((square.*virt_area_memfn_ptr)() == 4.0f);

	assert((shape_ptr->*virt_area_memfn_ptr)() == 4.0f);
}
