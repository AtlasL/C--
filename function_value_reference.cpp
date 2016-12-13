#include <iostream>

/* Declaracion de funciones */
int squareByValue(int number); // Value pass (copia temp)
void squareByReference(int &numberRef); // Reference pass (inte. direct)

int main()
{
	int x = 2;
	int z = 4;

	std::cout << "x = " << x << " before squareByValue\n";
	std::cout << "Value returned by squareByValue: "
			  << squareByValue(x) << std::endl;
	std::cout << "x = " << x << " after squareByValue\n" << std::endl;


	std::cout << "z = " << z << " before squareByReference" << std::endl;
	squareByReference(z);
	std::cout << "z = " << z << " after squareByReference" << std::endl;

	return 0;
}



/* Definicion de funciones */
int squareByValue(int number)
{
	return number *= number;
}

void squareByReference(int &numberRef)
{
	numberRef *= numberRef;
}
