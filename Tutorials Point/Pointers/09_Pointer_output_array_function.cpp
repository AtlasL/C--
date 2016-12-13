#include <iostream>
#include <ctime>
#include <cstdlib>

// function to generate and return random numbers.

int *getRandom()
{
	static int r[10];

	//set the seed
	srand( (unsigned)time(NULL) );

	for (int i = 0; i < 10; i++) {
		r[i] = rand();
		std::cout << r[i] << std::endl;
	}
	 return r;
}

int main()
{
	int *p;

	p = getRandom();

	for (int i = 0; i < 10; i++) {
		std::cout << "*(p + " << i << "): ";
		std::cout << *(p + i) << std::endl;
	}

	
	return 0;
}