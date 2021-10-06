#include <iostream>
#include <memory>

struct Shape {
	virtual float area() const
	{
		std::cout << "Shape::area\n";
		return 0;
	}

	virtual ~Shape() {}
};

struct Rect : public Shape {
	Rect(float width, float height) : width(width), height(height) {}

	float area() const override
	{
		std::cout << "Rect::area\n";
		return width * height;
	}

	float width, height;
};

int main()
{
	std::cout << "size of Shape: " << sizeof(Shape) << "\n"
	          << "size of Rect: " << sizeof(Rect) << "\n";

	Rect rect{2.0f, 3.0f};
	{
		const auto area = rect.area();
		std::cout << "Area of rect: " << area << "\n";
	}

	Shape shape = rect; // rect gets sliced to fit into shape.
	{
		const auto area = shape.area();
		std::cout << "Area of shape: " << area << "\n";
	}

	Shape *shape_ptr = &rect;
	{
		const auto area = shape_ptr->area();
		std::cout << "Area of shape_ptr: " << area << "\n";
	}

	std::shared_ptr<Shape> shape_sptr = std::make_shared<Rect>(3.0f, 4.0f);
	{
		const auto area = shape_sptr->area();
		std::cout << "Area of shape_sptr: " << area << "\n";
	}
}
