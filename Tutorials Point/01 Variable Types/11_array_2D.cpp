#include <iostream>

int main() {
	int a[5][2] = {{0,0}, {1,2}, {3,6}, {4,8}};

	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 2; j++){
			std::cout << "a[" << i << "][" << j << "]: ";
			std::cout << a[i][j] << std::endl;
		}

	return 0;
}