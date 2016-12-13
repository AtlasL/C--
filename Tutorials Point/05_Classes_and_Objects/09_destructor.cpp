/* Un destructor permite eliminar el objeto y asi liberar memoria.
   Se ejecuta automaticamente cuando el objeto sale de un scope o
   cuando se le indica mediante un puntero */

#include <iostream>

class Line {
public:
	void setLength(double len);
	double getLength(void);
	Line(); // Constructor sin parametro
	~Line(); // Destructor
private:
	double length;
};


// Member functions

Line::Line(void)
{
	std::cout << "Object is being created" << std::endl;
}

Line::~Line(void)
{
	std::cout << "Object is being deleted" << std::endl;
}

void Line::setLength(double len)
{
	length = len;
}

double Line::getLength(void)
{
	return length;
}




int main ()
{
	Line line;

	line.setLength(6.0);
	std::cout << "Length of line: " << line.getLength() << std::endl;

	return 0;
}






