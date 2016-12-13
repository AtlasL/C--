/* Every object in C++ has access to its own address through 
an important pointer called this pointer. The this pointer is an
implicit parameter to all member functions. Therefore, inside a
member function, this may be used to refer to the invoking object

Friend functions do not have a this pointer, because friends are not
members of a class. Only member functions have a this pointer. */

#include <iostream>

class Box {
public:
	//Definicion del constructor
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

	int compare(Box box)
	{
		return this->Volume() > box.Volume();
	}

private:
	double length;
	double breadth;
	double height;
};


int main(void)
{
	Box Box1(3.3, 1.2, 1.5);
	Box Box2(8.5, 6.0, 2.0);

	if (Box1.compare(Box2)) {
		std::cout << "Box2 is smaller than Box1" << std::endl;
	} else {
		std::cout << "Box2 is equal to or larger than Box1" << std::endl;
	}

	return 0;
}