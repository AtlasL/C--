#include <iostream>
#include <ctime>

void getSeconds(unsigned long *par);

int main() 
{
	unsigned long sec;

	getSeconds( &sec );
	std::cout << "Number of seconds: " << sec << std::endl;
	
	return 0;
}

void getSeconds(unsigned long *par) 
{
	*par = time(NULL);
	return;
}