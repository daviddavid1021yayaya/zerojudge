#include <iostream>
using namespace std;

int main()
{
	int row = 0, col = 0;
	int matrix[100][100];
	while (cin >> row >> col)
	{
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				cin >> matrix[i][j];
			}
		}

		for (int i = 0; i < col; i++)
		{

			for (int j = 0; j < row; j++)
			{
				cout << matrix[j][i] << " ";
			}
			cout << endl;
		}
	}

	return 0;
}
