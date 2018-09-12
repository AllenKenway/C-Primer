#include<iostream>
#include<stdlib.h>

int main()
{
	int sum = 0; 
	int value;
	while (std::cin >> value)
	{
		sum = sum + value;
	}								//输入一串数字 以ctrl+z为结束符
	std::cout << sum << std::endl;
	system("pause");
	return 0;
}