// ArrayReverse.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

using namespace std;

int reverseArray(int arr[],int numelements)
{
	for (int indexf = 0, indexb = numelements-1; indexf < (numelements / 2); indexf++, indexb--)
	{
		int tmp;
		tmp = arr[indexf];
		arr[indexf] = arr[indexb];
		arr[indexb] = tmp;
	}

	return 1;
}


void printArray(int arr[], int numelements)
{
	std::cout << "\n";
	for (int k = 0; k < numelements; k++)
	{
		std::cout << arr[k] << " ";
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	int arrofint[] = {1,2,3,4,5,6,7,8,9};

	int numelements = sizeof(arrofint) / sizeof(int);

	std::cout << "\n printing the array ";
	printArray(arrofint, numelements);

	std::cout << "\n reversing the array ";
	reverseArray(arrofint, numelements);

	printArray(arrofint,numelements);
	std::cout << "\n";
	return 0;
}

