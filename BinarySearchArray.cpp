// BinarySearchArray.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

int binarySearch(int arrayInteger[],int numelements, int searchnum)
{
	int start = 0,end = numelements - 1, mid, result = -1;

	while (start <= end)
	{
		if (start == 0)        // in case the searchnum is less than mid
			mid = end / 2;
		else if (start == end)
			mid = start = end;
		else
    		mid = (( end - start ) / 2) + start;  // in case the searchnum is greater than mid

		if (searchnum == arrayInteger[mid])
		{ 
			result = 1;
			break;
		}
		else if (searchnum < arrayInteger[mid])
		{
			end = mid - 1;
		}else if (searchnum > arrayInteger[mid])
		{
			start = mid + 1;
		}
	}

	return result;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int arrayInteger[] = {1,2,10,11,19,29,30};

	int numelements = sizeof(arrayInteger)/sizeof(int);

	int searchnum;

	std::cout << "\n Enter the element to be searched:";
	std::cin >> searchnum;

	int find = binarySearch(arrayInteger, numelements, searchnum);

	if (find == 1)
		std::cout << "\n the element is found";
	else
		std::cout << "\n the element is not found";

	std::cout << "\n";
	return 0;
}

