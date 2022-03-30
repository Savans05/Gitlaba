#include <iostream>
#include <windows.h>
#include "fooz2.h"

int main()
{
	srand(time(0));
	const int size = 10;
	int mas[size];
	Radmas(mas, size);
	coutmas(mas, size);
	swapmas(mas,size);
	cout << "\n";
	coutmas(mas, size);

}