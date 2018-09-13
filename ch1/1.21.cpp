#include<iostream>
#include "Sales_item.h"
#include<stdlib.h>

int main()
{
	Sales_item book1, book2;

	std::cin >> book1 >> book2;
	std::cout << book1 + book2 << std::endl;

	system("pause");
	return 0;
}