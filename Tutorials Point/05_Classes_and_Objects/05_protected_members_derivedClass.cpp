/* La diferencia de usar protected y private, es que esta ultima hace
invicible las cantidades que contiene a todo elemento externo a la clase.
El modificador protected da los mismos derechos que private pero hace 
accesible la informacion a clases derivadas.*/
#include <iostream>

class Box {
protected:
	double width;
};

// SmallBox is the derived class
class SmallBox:Box {
public:
	void setSmallWidth(double wid);
	double getSmallWidth(void);
};

// Function of the child class
double SmallBox::getSmallWidth(void)
{
	return width;
}

void SmallBox::setSmallWidth(double wid)
{
	width = wid;
}



int main()
{
	SmallBox box;

	box.setSmallWidth(5.0);
	std::cout << "Width of box: " << box.getSmallWidth() << std::endl;
	return 0;
}
