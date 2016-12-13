/* Es de buena practica asignar el valor NULL al puntero
cuando se realiza la iniciacion*/

#include <iostream>

int main() 
{
	int *ptr = NULL;
	std::cout << "The value of ptr is: " << ptr << std::endl;
	
	if(ptr)
		std::cout << "The pointer is not null\n";
	else
		std::cout << "The pointer is null!\n";

	return 0;


}