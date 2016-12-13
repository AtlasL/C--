/* Los constructores inicializan valores de 
member variables */

#include <iostream>

class Line {
public:
	void setLength(double len);
	double getLength(void);
	Line(); // Contructor!!
private:
	double length;
};

// Member functions definitions including constructor
Line::Line(void)
{
	std::cout << "Object is being created" << std::endl;
}

void Line::setLength(double len)
{
	length = len;
}

double Line::getLength(void)
{
	return length;
}


int main()
{
	Line line;

	line.setLength(6.0);
	std::cout << "Length of line: " << line.getLength() << std::endl;
	return 0;
}