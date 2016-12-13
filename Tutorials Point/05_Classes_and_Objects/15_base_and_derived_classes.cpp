#include <iostream>

class Shape {
public:
	void setWidth(int w)
	{
		width = w;
	}
	void setHeight(int h)
	{
		height = h;
	}
	// Protected da acceso a sub clases
protected:
	int width;
	int height;
};

// Derived class
class Rectangle: public Shape {
public:
	int getArea()
	{
		return width * height;
	}
};

int main(void)
{
	Rectangle Rect;

	Rect.setWidth(5);
	Rect.setHeight(7);

	std::cout << "Total area: " << Rect.getArea() << std::endl;
	return 0;
}