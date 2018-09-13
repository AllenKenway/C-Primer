#include<iostream>
#include<stdlib.h>
#include "Sales_item.h"

int main()
{
	Sales_item book, total;

	if(std::cin >> total)
	{
		while (std::cin >> book)
		{
			if (book.isbn() == total.isbn())
				total = total + book;
			else
				return -1;
		}
	}

	std::cout << total << std::endl;

	system("pause");
	return 0;
}