#pragma once
using namespace std;
void randmas(int mas[][10],int row,int col)
{
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			mas[i][j] = rand() % 100;
		}
	}
}
void coutmas(int mas[][10], int row, int col)
{

	for (int i = 0; i < col; i++)
	{
		cout << "\n\t";
		for (int j = 0; j < row; j++)
		{
			cout << mas[i][j] << " ";
		}
	}

}
int prostch(int mas[][10], int row, int col)
{
	int ch = 0;
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			if (mas[i][j]!=1)
			{
				int y = 0;
				for (int k = 1; k <= mas[i][j]; k++)
				{
					if (mas[i][j]%k==0)
					{
						y++;
					}
				}
				if (y==2)
				{
					ch++;
				}
			}

		}
	}
	return ch;
}
