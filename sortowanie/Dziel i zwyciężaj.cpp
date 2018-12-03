#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int szukaj (int tab[], int L, int P, int x)
{
    while (L <= P)
    {
        int sr = (L + P) / 2;
        if (x == tab[sr])
        {
            return sr + 1;
        }
        if (x < tab[sr])
        {
            return szukaj(tab, L, sr - 1, x);
        }
        else
        {
            return szukaj(tab, sr + 1, P, x);
        }
    }
}

int main()
{
    int i, j, x, L = 0, P = 19;
    int tab[20];
    srand(time(NULL));
    for (i = 0; i <= 19; i++)
    {
        tab[i] = rand () % 101;
    }
    for (j = 19; j > 0; j--)
    {
        for (i = 0; i < j; i++)
        {
            if (tab[i] > tab[i + 1])
            {
                swap(tab[i], tab[i + 1]);
            }
        }
    }
    for (i = 0; i < 20; i++)
    {
        cout << tab[i] << " ";
    }
    cout << endl << "Podaj liczbe: " << endl;
    cin >> x;
    cout << "Liczba znajduje sie na miejscu: " << szukaj(tab, L, P, x);
    return 0;
}
