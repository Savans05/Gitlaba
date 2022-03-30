

using namespace std;

void Radmas(int mas[], int size) {

	

	for (int i = 0; i < 10;i++)
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
void minmaks(int mas[], int size) 
{
	int min = 100, maks = -1,chmn,chmk;
	for (int i = 0; i < size; i++)
	{
		if (mas[i] < min)
		{
			chmn = i;
			min = mas[i];
			
		}
		if (mas[i] > maks)
		{
			chmk = i;
			maks = mas[i];
		}
	}
	
	cout << "\n\tMin = " << min << " pozition - " << chmn+1;
	cout << "\n\tMaks = " << maks << " pozition - " << chmk+1;

}