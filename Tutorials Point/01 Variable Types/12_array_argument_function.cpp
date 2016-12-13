#include <iostream>

double getAverage(int arr[], int size);

int main()
{
	int balance[5] = {1000, 2, 3, 17, 50};
	double avg;

	avg = getAverage(balance, 5);
	std::cout << "Average value is: " << avg << std::endl;

	return 0;
}

double getAverage(int arr[], int size) {
	int i, sum = 0;
	double avg;

	for (i = 0; i < size; i++){
		sum += arr[i];
	}

	avg = double(sum)/size;
	return avg;
}
