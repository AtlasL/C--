/*
enum permite crear una variable cuyos valores por default
comienzan de 0 en adelante, idificando cada uno de ellos con
una etiqueta personalizada. En este caso: red, green, blue
*/

#include <iostream>

int main(){
	enum color {red, green, blue} c;
	c = blue;
	std::cout << "The value of \"c\" is: " << c << std::endl;


	enum country {chile, argentina=4, peru} b;
	b = peru;
	std::cout << "The value of \"b\" is: " << b << std::endl;
	return 0; 
}