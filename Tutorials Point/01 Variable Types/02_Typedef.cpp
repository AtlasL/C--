/*
Definicion de nuevos tipos de variables usando como referencia
las ya existentes
*/

#include <iostream>

int main() {
	typedef int feet;
	feet distance;

	std::cout << "The size of \"Distance\" is: " << sizeof(distance) << " bytes" << std::endl;
	return 0;
}