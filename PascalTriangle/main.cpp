#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите глубину треугольника: "; cin >> n;
	int fi = 1;
	
	for (int i = 1; i < n; i++)
	{
		fi *= i;
		int fj = 1;
		
		for (int j = 1; j < i; j++)
		{
			fj *= j;
			int fij = 1;
			for (int k = 1; k < i - j; k++)
			{
				fij *= k;
			}
			cout << fi / (fj * fij) << "\t";
		}
		cout << endl;
	}
}