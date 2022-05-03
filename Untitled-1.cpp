#include <iostream>
#include <math.h>


using namespace std;
int main()
{
	system("chcp 1251 > nul");
	int n;
	cout << "Введите количество элементов массива: ";
	cin >> n;
	int mas[n];
	
	cout << "Заполните массив " << n << " элементами" << endl;
	
	for (int i = 0; i < n; i++) 
	{
		cin >> mas[i];
	}
	
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] % 2 == 0) cout << mas[i] << endl;	
	}

	
	return 0;
}

