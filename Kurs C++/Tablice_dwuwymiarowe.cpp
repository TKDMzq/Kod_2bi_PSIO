#include <iostream>
using namespace std;

int main ()
{
	const int n = 5, m = 5;
	int i = 0, j = 0;
	int tab[n][m];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (i == j || (i + j) == n - 1)
			{
				tab[i][j] = 1;
			}
			else
			{
				tab[i][j] = 0;
			}
		}
	}
	cout << "\n Tablica:\n";
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			cout << tab[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}