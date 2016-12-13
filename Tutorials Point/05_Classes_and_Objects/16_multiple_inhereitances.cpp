/*
A C++ class can inherit members from more than one class and here is the extended syntax:
class derived-class: access baseA, access baseB....
*/

#include <iostream>

// Base class shape
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
protected:
	int width, height;
};

// Base class PaintCost

class PaintCost {
public:
	int getCost(int area)
	{
		return area * 70;
	}
};

// Derived class
class Rectangle: public Shape, public PaintCost {
public:
	int getArea()
	{
		return width * height;
	}
};



int main()
{
	Rectangle Rect;
	int area;

	Rect.setWidth(5);
	Rect.setHeight(7);

	area = Rect.getArea();

	std::cout << "Total area: " << Rect.getArea() << std::endl;
	std::cout << "Total paint cost: $" << Rect.getCost(area) << std::endl;

	return 0;
}