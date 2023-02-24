//Geometry
#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define GEOMETRY_1
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_2_v2
//#define TRIANGLE_3
//#define TRIANGLE_3_v2
//#define TRIANGLE_4
//#define TRIANGLE_4_v2
//#define RHOMBUS
//#define LAST_TASK
//#define RHOMBUS_1
//#define PLUS_MINUS


void main()
{
	setlocale(LC_ALL, "");
	int n;
#ifdef GEOMETRY_1
		cout << "¬ведите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // GEOMETRY_1
	
#ifdef TRIANGLE_1
	cout << "¬ведите размер треугольника: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_1

#ifdef TRIANGLE_2
	cout << "¬ведите размер треугольника: "; cin >> n;
	for (int i = n; i > 0; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

#endif // TRIANGLE_2

#ifdef TRIANGLE_2_v2
	cout << "¬ведите размер треугольника: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = n; j >= 1; j--)
		{
			if (j > i) cout << "* ";
			if (j < i) cout << " ";
		}
		cout << endl;
	}
#endif // TRIANGLE_2_v2

#ifdef TRIANGLE_3

	int g = 4;
	cout << "¬ведите размер треугольника: "; cin >> n;
	for (int i = n; i >= 0; i--,g+=2)
	{
		for (int j = i; j>0; j--)
		{
			cout << "* ";
		}
		cout << endl;
		cout.width(g);

	}
#endif // TRIANGLE_3

#ifdef TRIANGLE_4
	cout << "¬ведите размер треугольника: "; cin >> n;
	int g = n * 2;
	for (int i = 1; i <= n; i++, g -= 2)
	{
		cout.width(g);
		for (int j = 0; j < i; j++)
		{
			cout << "* ";
		}

		cout << endl;
	}
#endif // TRIANGLE_4

#ifdef RHOMBUS
	cout << "¬ведите размер ромба (четное число): "; cin >> n;
	if (n % 2 == 0)
	{
		int leftc = n / 2;
		int rightc = n / 2 + 1;
		for (int i = 1; i <= n / 2; i++)
		{
			for (int j = 0; j <= n; j++)
			{
				if (j == leftc) cout << "/";
				if (j == rightc) cout << "\\";
				else
				{
					cout << " ";
				}
			}
			cout << endl;
			leftc--;
			rightc++;
		}
		leftc = 1;
		rightc = n;
		for (int i = 1; i <= n / 2; i++)
		{
			for (int j = 0; j <= n; j++)
			{
				if (j == leftc) cout << "\\";
				if (j == rightc) cout << "/";
				else
				{
					cout << " ";
				}
			}
			cout << endl;
			leftc++;
			rightc--;
		}
	}
	else
	{
		cout << "¬ы ввели нечетное число!";
	}
#endif // RHOMBUS

#ifdef LAST_TASK
	cout << "¬ведите размер фигуры: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 1; j <= n; j++)
			{
				if (j % 2 == 0)
				{
					cout << "+";
				}
				if (j % 2 != 0)
				{
					cout << "-";
				}
			}
			cout << endl;
		}
		if (i % 2 != 0)
		{
			for (int j = 1; j <= n; j++)
			{
				if (j % 2 != 0)
				{
					cout << "+";
				}
				if (j % 2 == 0)
				{
					cout << "-";
				}
			}
			cout << endl;
		}
	}
#endif // LAST_TASK
	
#ifdef RHOMBUS_1
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++) cout << " "; cout << "/";
		for (int j = 0; j < i*2; j++) cout << " "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++) cout << " "; cout << "\\";
		for (int j = 0; j < (n - 1 -i)*2; j++) cout << " "; cout << "/";
		cout << endl;
	}
#endif // RHOMBUS_1

#ifdef PLUS_MINUS
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			/*if ((i + j) % 2 == 0) cout << "+ ";
			else cout << "- ";*/
			//if (i % 2 == j % 2) cout << "+ ";else cout << "- ";
			(i % 2 == j % 2) ? cout << "+ " : cout << "- ";
		}
		cout << endl;
	}
#endif // PLUS_MINUS

#ifdef TRIANGLE_3_v2
	cout << "¬ведите размер треугольника: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = n; j > i; j--)
		{
			cout << " ";
		}
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
#endif // TRIANGLE_3_v2

#ifdef TRIANGLE_4_v2
	cout << "¬ведите размер треугольника: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << " ";
		}
		for (int j = n; j > i; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
#endif // TRIANGLE_4_v2



}