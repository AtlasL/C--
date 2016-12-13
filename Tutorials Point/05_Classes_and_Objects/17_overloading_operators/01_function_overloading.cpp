/*
You can have multiple definitions for the same function 
name in the same scope. The definition of the function 
must differ from each other by the types and/or the number
 of arguments in the argument list.
*/

#include <iostream>

class printData {
public:
	void print(int i)
	{
		std::cout << "Printing int: " << i << std::endl;
	}
	void print(double f)
	{
		std::cout << "Printing float: " << f << std::endl;
	}
	void print(char* c)
	{
		std::cout << "Printing character: " << c << std::endl;
	}
};


int main(void)
{
	printData pd;

	pd.print(5);
	pd.print(500.236);
	pd.print("Hello C++");

	return 0;
}