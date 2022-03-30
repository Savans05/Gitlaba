#include <iostream>
#include <windows.h>
#include "fooz3.h"

int main()
{
	srand(time(0));
	const int row = 10, col = 10;
	int mas[row][col];
	randmas(mas, row, col);
	coutmas(mas, row, col);
	cout << "\n\n\n\n";
	int ch = prostch(mas, row, col);
	cout << "\n\tPros ch = " << ch;
}