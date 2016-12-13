#include <iostream>
#include <cstring>

int main()
{
	char str1[10] = "Hello";
	char str2[10] = "World";
	char str3[10];
	int len;

	strcpy(str3, str1);
	std::cout << "strcpy(str3, str3): " << str3 << std::endl;

	strcat(str1, str2);
	std::cout << "strcat(str1, str2): " << str1 << std::endl;

	len = strlen(str1);
	std::cout << "strlen(str1): " << len << std::endl;

	return 0;
	
}