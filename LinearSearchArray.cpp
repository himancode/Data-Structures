// LinearSearchArray.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

int linearsearcharray(int * arrayInt, int numofelements, int findInt)
{
	for (int index = 0; index < numofelements; index++)
	{
		if (arrayInt[index] == findInt)
		{
			return 0;
		}
	}
	return -1;
}

int _tmain(int argc, _TCHAR* argv[])
{
	std::cout << "Linear search in array";

	int arrayInt[] = {4,9,6,2,19,3,39,1,5};
	int numofelements = sizeof(arrayInt)/sizeof(int);

	int findInt;

	std::cout << "\n enter the element to be searched";
	std::cin >> findInt;

	int foundInt = linearsearcharray(arrayInt, numofelements, findInt);

	if (foundInt == 1)
		std::cout << "\n The number " << findInt << "is found in the array";
	else
		std::cout << "\n The number " << findInt << "is not found in the array";

	return 0;
}

