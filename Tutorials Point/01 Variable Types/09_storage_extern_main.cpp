
//g++ main.cpp support.cpp -o write
#include <iostream>

int count;
extern void write_extern();

int main(){
	count = 5;
	write_extern();
}