// WindbgDemoProject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


void ArrayBonundException()
{
	int arr[5] = {1,2,3,3,4};
	for(int i =0; i< 6; i++)
	{
		cout<< arr[i];
	}
}



int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

