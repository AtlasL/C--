#include <iostream>

class Line {
public:
	double length;
	void setLength(double len);
	double getLength(void);
};


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
	std::cout << "Length of line: " << line.length << std::endl;
	return 0;
}
