#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	
	int n;
	cout << "Введите размер шахматной доски: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i % 2 == j % 2) cout << "*";
			else cout << "  ";
		}
		cout << endl;
	}

}