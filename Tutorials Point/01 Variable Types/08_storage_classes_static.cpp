#include <iostream>

// Function declaration
void func(void);

static int count = 10; //Global static variable

int main(){
	while(count--){
		func();
	}
	return 0;
}

// Function definition
void func(void) {
	static int i = 5; // Local static variable
	i++;
	std::cout << "i is " << i;
	std::cout << " and count is " << count << std::endl;
}