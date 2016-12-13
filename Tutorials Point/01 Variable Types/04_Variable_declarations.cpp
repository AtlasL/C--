/*
Al igual que las funciones, las variables se pueden declaran al comienzo del codigo,
antes de la funcion main para asi avisar al compilador, que pese aun sin necesariamente
esstar definidas, una variable de cierto tipo eventualmente se definira en algun momento.
Al momento te tratar con codigos extensos, es una practica habitual usar este tipo
de definicion "previa" con las funciones.
*/

#include <iostream>

// Declaracion de variables
extern int a, b;
extern int c;
extern float f;

int main ()
{
	// Definicion de variables
	int a, b;
	int c;
	float f;

	//Inicializacion de variables
	a = 10;
	b = 20;
	c = a + b;

	std::cout << c << std::endl;

	f = 70.0/3.0;
	std::cout << f << std::endl;

	return 0;
}