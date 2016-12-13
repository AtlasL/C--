/*
We can define class members static using static keyword. 
When we declare a member of a class as static it means no 
matter how many objects of the class are created, there is 
only one copy of the static member.

A static member is shared by all objects of the class. All static 
data is initialized to zero when the first object is created, if no 
other initialization is present. We can't put it in the class definition
but it can be initialized outside the class as done in the following
example by redeclaring the static variable, using the scope resolution 
operator :: to identify which class it belongs to.

*/

#include <iostream>

class Box {
public:
	static int objectCount;
	// cosntrutor
	Box(double l = 2.0, double b = 2.0, double h = 2.0 )
	{
		std::cout << "Constructor called." << std::endl;
		length = l;
		breadth = b;
		height = h;
		// Increase every time object is created
		objectCount++;
	}

	double Volume()
	{
		return length * breadth * height;
	}
private:
	double length, breadth, height;
};

// Initialize static member of class Box
int Box::objectCount = 0;


int main(void)
{
	Box Box1(3.3, 1.2, 1.5);
	Box Box2(8.5, 6.0, 2.0);

	std::cout << "Total objects: " << Box::objectCount << std::endl;

	return 0;
}