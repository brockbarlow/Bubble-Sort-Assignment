//Bubble Soft (C++), 5/24/2017, Brock Barlow.
//1. Implement.
//2. Cost Analysis.
//3a. When would this be preferred over other sorting methods? Answer: 
//3b. Do you know any other sorting methods? Answer(s): Heap Sort.

//1. Implement:
#include <iostream>
#include "Header.h" //header file has bubble sort function.

void main()
{
	int testArray[] = { 45, 2, 9, 642, 1790, 17, 3, 90, 38, 35, 26, 2200, 4 };
	int arraySize = sizeof(testArray) / sizeof(testArray[0]); //testArray size is 13.
	
	std::cout << "Array before bubble sort: " << std::endl;
	for (int i = 0; i < arraySize; i++)
	{
		std::cout << testArray[i] << " ";
	}

	bubbleSort(testArray, arraySize);
	std::cout << "\n" << "\n" << "Array after bubble sort: " << std::endl;
	for (int i = 0; i < arraySize; i++)
	{
		std::cout << testArray[i] << " ";
	}

	std::cout << "\n" << std::endl;
	system("pause");
}