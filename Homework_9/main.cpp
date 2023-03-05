#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define CHESS_1
//#define CHESS_2

#define UPPER_LEFT_ANGLE (char)218
#define UPPER_RIGHT_ANGLE (char)191
#define LOWER_LEFT_ANGLE (char)192
#define LOWER_RIGHT_ANGLE (char)217
#define HORIZONTAL_LINE (char)196
#define VERTICAL_LINE (char)179
#define WHITE_BOX (char)219
#define BLACK_BOX ' '


void main()
{
	setlocale(LC_ALL, "");
	int n;

#ifdef CHESS_1
	cout << "Введите размер шахматной доски: "; cin >> n;
	setlocale(LC_ALL, "C");
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0) cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n) cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0) cout << LOWER_LEFT_ANGLE;
			else if (i == n && j == n) cout << LOWER_RIGHT_ANGLE;
			else if (i != 0, n && j == 0) cout << VERTICAL_LINE;
			else if (i != 0, n && j == n) cout << VERTICAL_LINE;
			else if (i == 0 && j > 0) cout << HORIZONTAL_LINE << HORIZONTAL_LINE;
			else if (i == n && j > 0) cout << HORIZONTAL_LINE << HORIZONTAL_LINE;
			else if (i != 0, n && j != 0, n && j % 2 == i % 2) cout << WHITE_BOX << WHITE_BOX;
			else cout << BLACK_BOX << BLACK_BOX;
		}
		cout << endl;
	}
#endif // CHESS_1

#ifdef CHESS_2
	cout << "Введите размер шахматной доски: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int s = 0; s < 5; s++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i % 2 == j % 2)
				{
					for (int k = 0; k < 5; k++)
					{
						cout << "* ";
					}
				}
				else
				{
					for (int l = 0; l < 5; l++)
					{
						cout << "  ";
					}
				}
			}
			int j = 0;
			cout << endl;
		}
	}
#endif // CHESS_2

}