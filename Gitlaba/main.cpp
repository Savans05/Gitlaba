#include <iostream>
#include <windows.h>
#include "fooz1.h"

int main() 
{
	srand(time(0));
	const int size = 10;
	int mas[size];
	Radmas(mas, size);
	coutmas(mas, size);
	minmaks(mas, size);
	
	return 0;
}