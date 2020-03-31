//============================================================================
// Name        : mem_check.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!


	const int size  = 3;
	int *arr = new int [size];
	for(int i=0;i<size;i++)
	{
		arr[i] = i*i;
				cout <<"arr = " <<arr[i] <<endl;
	}
	delete [] arr;
	arr[0] = 1; // assigning vale after deallocatimng memory

	int *p = NULL;
	*p=1;// access violation

	//char *str = "hello";

	//*str = 'b';

	return 0;
}
