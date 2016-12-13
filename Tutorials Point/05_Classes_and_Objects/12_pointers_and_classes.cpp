#include <iostream>

class Box 
{
public:
	//Constructor definition

	Box(double l = 2.0, double b = 2.0, double h = 2.0)
	{
		std::cout << "Constructor called." << std::endl;
		length = l;
		breadth = b;
		height = h;
	}

	double Volume()
	{
		return length * breadth * height;
	}

private:
	double length, breadth, height;
};


int main(void)
{
	Box Box1(3.3, 1.2, 1.5);
	Box Box2(8.5, 6.0, 2.0);
	Box *ptrBox;

	ptrBox = &Box1;
	std::cout << "Volume of Box1: " << ptrBox->Volume() << std::endl;

	ptrBox = &Box2;
	std::cout << "Volume of Box2: " << ptrBox->Volume() << std::endl;

	return 0;
}