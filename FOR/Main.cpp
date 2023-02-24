#include<iostream>
using namespace std;

//#define FOR1
#define MULTIPLICATION_TABLE
//#define PYTHAGORAS_TABLE
void main()
{
	setlocale(LC_ALL, "");
	
#ifdef FOR1
	int n; //количество итераций
	cout << "Введите количество итераций: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif // FOR1

#ifdef MULTIPLICATION_TABLE
	for (int i = 1; i <= 10; i++)
	{
		cout << "Таблица умножения на " << i << ":\n";
		for (int j = 1; j <= 10; j++)
		{
			cout << "\t\t\t";
			if (i < 10)cout << " ";
			cout << i << " * ";
			if (j < 10)cout << " ";
			cout << j << " = ";
			if (i * j < 100)cout << " ";
			if (i * j < 10)cout << " ";
			cout << i * j << endl;
		}
		cout << endl;
	}
#endif // MULTIPLICATION_TABLE

#ifdef PYTHAGORAS_TABLE
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout.width(5);
			cout << right;
			cout << i * j;
		}
		cout << endl;
	}
#endif // PYTHAGORAS_TABLE


}