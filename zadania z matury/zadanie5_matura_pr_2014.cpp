#include <iostream>
#include <fstream>
using namespace std;

bool pierwsza(int a)
{
    for (int i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool druga(string b, int d)
{
    int i;
    for (i = 0; i < d - 1; i++)
    {
        if (b[i] >= b[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    fstream plik;
    plik.open("NAPIS.TXT", ios::in);
    fstream zapis;
    zapis.open("ZADANIE5.TXT", ios::out);
    string x;
    int d, i, j;
    string tab[1000];
    string tablica[100];
    int licznik = 0, licznik2 = 0;
    zapis << "B: " << endl;
    for (i = 0; i < 1000; i++)
    {
        plik >> x;
        d = x.length();
        tab[i] = x;
        int wynik = 0;
        for (j = 0; j < d; j++)
        {
            wynik = wynik + x[j];
        }
        if (pierwsza(wynik) == 1)
        {
            licznik++;
        }
        if (druga(x, d) == 1)
        {
             tab[licznik2] = x;
             licznik2++;
        }
    }
    zapis << "A: " << licznik << endl;
    zapis << "C: " << endl;
    for (i = 0; i < 1000; i++)
    {
        for (j = i + 1; j < 1000; j++)
        {
            if (tab[i] == tab[j] && tab[j] != "0")
            {
                zapis << tab[i] << endl;
                tab[j] = "0";
            }
        }
    }
    return 0;
}
