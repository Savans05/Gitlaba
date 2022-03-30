using namespace std;

void Radmas(int mas[], int size) {



	for (int i = 0; i < size; i++)
	{
		mas[i] = rand() % 10;
	}
}
void coutmas(int mas[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << mas[i] << " ";
	}
}
void swapmas(int mas[], int size)
{
	int ch = 0;
	for (int i = size-1; i >= ch; i--)
	{
		swap(mas[i], mas[ch]);
		ch++;
	}
}

