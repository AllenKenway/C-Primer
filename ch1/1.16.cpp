#include<iostream>
#include<stdlib.h>

int main()
{
	int sum = 0; 
	int value;
	while (std::cin >> value)
	{
		sum = sum + value;
	}								//����һ������ ��ctrl+zΪ������
	std::cout << sum << std::endl;
	system("pause");
	return 0;
}