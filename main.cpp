#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;
int main()
{
	char switch_on;
	do {
		int a = 0, b = 0, c = 0, d = 0, e = 0, f = 11;
		system("cls");
		cout << "#>----------<MENU>----------<#" << endl;
		cout << "|         1 - Case 1         |" << endl;
		cout << "|         2 - Case 2         |" << endl;
		cout << "|         3 - Case 3         |" << endl;
		cout << "#>--------------------------<#" << endl;
		cout << "|         0 - Exit           |" << endl;
		cout << "#>--------------------------<#" << endl;
		switch_on = _getch();
		system("cls");
		switch (switch_on)
		{
		case '1':
		{
			const int col = 5;
			const int row = 5;
			int arr_2[col][row];
			for (size_t i = 0; i < col; i++)
			{
				for (size_t j = 0; j < row; j++)
				{
					arr_2[i][j] = rand() % 10;
					cout << "  " << arr_2[i][j] << "\t";
				}
				cout << endl << endl;
			}
			int sum = 0;

			for (size_t i = 0; i < col; i++)
			{

				for (size_t j = 0; j < row; j++)
				{
					sum += arr_2[i][j];
				}

			}
			cout << " Sum : " << sum << endl;
			cout << endl;
			double a = 0;

			for (size_t i = 0; i < col; i++)
			{

				for (size_t j = 0; j < row; j++)
				{

					a = sum / 25;

				}
			}
			cout << " Arithmetic mean : " << a << endl;
			cout << endl;
			int min, max;
			min = max = arr_2[0][0];
			for (size_t i = 0; i < col; i++)
			{
				for (size_t j = 0; j < row; j++)
				{
					if (min > arr_2[i][j])
					{
						min = arr_2[i][j];

					}
					if (max < arr_2[i][j])
					{
						max = arr_2[i][j];

					}
				}
			}
			cout << " Min : " << min << endl;
			cout << " Max : " << max << endl;
		}break;
		case '2':
		{

		}break;
		}
	}
	return 0;
}