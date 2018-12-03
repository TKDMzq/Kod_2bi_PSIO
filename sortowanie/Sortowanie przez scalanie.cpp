#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void scal (int tab[], int L, int P, int n)
{
    int i, iP, iL, sr, nowa[n]; // licznik, indeks prawy, indeks lewy, srodek, nowa tablica od dowolnego n
    sr = (L + P) / 2;
    iL = L;
    iP = sr + 1;
    for (i = 0; i < n; i++)
    {
        nowa[i] = tab[i];
    }
    i = L;
    while (iL <= sr && iP <= P)
    {
        if(nowa[iL] < nowa[iP])
        {
            tab[i] = nowa[iL];
            iL++;
            i++;
        }
        else
        {
            tab[i] = nowa[iP];
            iP++;
            i++;
        }
    }
    if (iL > sr)
    {
        while (iP <= P)
        {
            tab[i] = nowa[iP];
            i++;
            iP++;
        }
    }
    else
    {
        while (iL <= sr)
        {
            tab[i] = nowa[iL];
            i++;
            iL++;
        }
    }
}

void dziel (int tab[], int L, int P, int n)
{
    int sr = (L + P) / 2;
    if (L < sr)
    {
        dziel(tab, L, sr, n);
    }
    if (sr < P)
    {
        dziel(tab, sr + 1, P, n);
    }
    scal(tab, L, P, n);
}
int main()
{
    int n, i; // ilość elementów tablicy, licznik
    cout << "Podaj wielkosc tablicy: ";
    cin >> n;
    int tab[n];
    srand(time(NULL));
    cout << "Losowe liczby: ";
    for (i = 0; i < n; i++)
    {
        tab[i] = rand () % 101;
        cout << tab[i] << " ";
    }
    cout << endl << "Posortowane liczby: ";
    dziel(tab, 0, n - 1, n);
    for (i = 0; i < n; i++)
    {
        cout << tab[i] << " ";
    }
    return 0;
}
