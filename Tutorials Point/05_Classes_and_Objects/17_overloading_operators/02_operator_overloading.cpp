/*
Overloaded operators are functions with special names the keyword 
operator followed by the symbol for the operator being defined. Like 
any other function, an overloaded operator has a return type and a parameter list.

Box operator+(const Box&);

declares the addition operator that can be used 
to add two Box objects and returns final Box object.
Most overloaded operators may be defined as ordinary non-member 
functions or as class member functions. In case we 
define above function as non-member function of a class then 
we would have to pass two arguments for each operand as follows:

Box operator+(const Box&, const Box&);
*/

#include <iostream>

class Box {
public:
	double getVolume(void)
	{
		return length * height * breadth;
	}
	void setLength(double len)
	{
		length = len;
	}
	void setBreadth(double bre)
	{
		breadth = bre;
	}
	void setHeight(double hei)
	{
		height = hei;
	}

	// Overload + operaor to add two Box objects!!!
	Box operator+(const Box& b)
	{
		Box box;
		box.length = this->length + b.length;
		box.breadth = this->breadth + b.breadth;
		box.height = this->height + b.height;
		return box;
	}
private:
	double length, breadth, height;
};


int main()
{
	Box Box1, Box2, Box3;
	double volume = 0.0;

	Box1.setLength(6.0);
	Box1.setBreadth(7.0);
	Box1.setHeight(5.0);

	Box2.setLength(12.0);
	Box2.setHeight(10.0);
	Box2.setBreadth(13.0);


	volume = Box1.getVolume();
	std::cout << "Volume of Box1: " << volume << std::endl;

	volume = Box2.getVolume();
	std::cout << "Volume of Box2: " << volume << std::endl;

	// ADD TWO BOXES!!
	Box3 = Box1 + Box2;

	volume = Box3.getVolume();
	std::cout << "Volume of Box3: " << volume << std::endl;
}





