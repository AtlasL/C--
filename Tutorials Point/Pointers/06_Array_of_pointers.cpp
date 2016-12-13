#include <iostream>

const int MAX = 3;

int main()
{
	int var[MAX] = {10, 100 ,200};
	int *ptr[MAX];

	for (int i = 0; i < MAX; i++)
	{
		ptr[i] = &var[i];
	}

	for (int i = 0; i < MAX ; i++) {
		std::cout << "Value of var[" << i << "] = ";
		std::cout << *ptr[i] << std::endl;
	}

	return 0;
}