#include<iostream>
#include<stdlib.h>
#include "Sales_item.h"

int main()
{
	Sales_item book1, book2;

	int total;

	if (std::cin >> book1)
	{
		total = 1;
		while (std::cin >> book2)
		{
			if (book1.isbn() == book2.isbn())
				total++;
			else
			{
				std::cout << book1.isbn() << " " << total << std::endl;
				book1 = book2;
				total = 1;
			}
		}
	}


	system("pause");
	return 0;
}