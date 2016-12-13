#include <iostream>

int main()
{
	int var = 20;
	int *point_to_var;

	point_to_var = &var;

	std::cout << "Value of var variable: " << var << std::endl;
	std::cout << "Address stored in memory: " << point_to_var << std::endl;

	std::cout << "Value of *variable: " << *point_to_var << std::endl;
	return 0;
}