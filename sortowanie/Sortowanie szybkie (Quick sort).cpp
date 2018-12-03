#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void sortuj (int tab[], int lewy, int prawy)
{
    int i = lewy, j = prawy;
    int sr = tab[(prawy + lewy) / 2];
    do
    {
        while (tab[i] < sr)
        {
            i++;
        }
        while (tab[j] > sr)
        {
            j--;
        }
        if (i <= j)
        {
            swap(tab[i], tab[j]);
            i++;
            j--;
        }
    }
    while (i <= j);
    if (lewy < j)
    {
        sortuj(tab, lewy, j);
    }
    if (i < prawy)
    {
        sortuj (tab, i, prawy);
    }
}

int main()
{
    int n, j;
    cin >> n;
    int tab[n];
    srand(time(NULL));
    for (j = 0; j < n; j++)
    {
        tab[j] = rand () % 101;
        cout << tab[j] << " ";
    }
    sortuj(tab, 0, n - 1);
    cout << endl;
    for (j = 0; j < n; j++)
    {
        cout << tab[j] << " ";
    }
    return 0;
}
