#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

const int n = 5;

void wczytaj (int tab[])
{
	srand(time(NULL)); 
	for (int i = 0; i < n; i++)
	{
		tab[i] = rand () % 101;
	}
}

void wyswietl (int tab[])
{
	for (int i = 0; i < n; i++)
	{
		cout << tab[i] << " ";
	}
}
int max(int tab[])
{
	int i;
	int max = tab[0];
	for (i = 1; i < n; i++)
	{
		if (max < tab[i])
		{
			max = tab[i];
		}
	}
	return max;
}
int min(int tab[])
{
	int i;
	int min = tab[0];
	for (i = 1; i < n; i++)
	{
		if (min > tab[i])
		{
			min = tab[i];
		}
	}
	return min;
}
int main ()
{
	int tab[n];
	wczytaj(tab);
	wyswietl(tab);
	cout << endl << "Najwieksza w tablicy: " << max(tab) << endl << "Najmniejsza w tablicy: " << min(tab) << endl;
	sort(tab,tab+n);
	wyswietl(tab);
	return 0;
}
