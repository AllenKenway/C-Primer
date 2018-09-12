#include <iostream>
#include<stdlib.h>

int main()
{
	//std::cout << "/*";	   //Êä³ö£º/*
	//std::cout << "*/";			 //Êä³ö£º*/
	//std::cout <</* "*/" */;			  //´íÎó
	std::cout <</* "*/" /* "/*" */;				//Êä³ö£º/*
	system("pause");
}