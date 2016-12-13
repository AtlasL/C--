#include <iostream>

class Line {
public:
	void setLength(double len);
	double getLength(void);
	Line(double len);
private:
	double length;
};

// Member functions definitions including constructor
Line::Line(double len)
{
	std::cout << "Object is being created, length = " << len << std::endl;
	length = len;
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
	Line line(10.0); /* Inicializacion de objecto + input*/
	std::cout << "Length of line: " << line.getLength() << std::endl;

	line.setLength(6.0);
	std::cout << "Length og line: " << line.getLength() << std::endl;

	return 0;

}