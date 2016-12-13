/* Las funciones friend pueden acceder a todos los
elementos de la clase asignada, sin ser member functions */

#include <iostream>

class Box {
public:
	friend void printWidth(Box box);
	void setWidth(double wid);
private:
	double width;
};


void Box::setWidth(double wid)
{
	width = wid;
}

void printWidth(Box box)
{
	std::cout << "Width of box: " << box.width << std::endl;
}

int main()
{
	Box box;

	box.setWidth(10.0);
	printWidth(box);
	return 0;	
}