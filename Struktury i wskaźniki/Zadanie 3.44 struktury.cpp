#include <iostream>

using namespace std;

struct przelot
{
    string trasa, linia;
    float cena, czas, ilosc;
};

int main()
{
    int i, suma = 0, n, srednia, p;
    float mx, b;
    const int m = 5;
    cout << "Podaj ilosc przelotow: " << endl;
    cin >> n;
    while (n > m)
    {
        cout << "Za duza ilosc przelotow!" << endl;
        cout << "Podaj ilosc przelotow: " << endl;
        cin >> n;
        if (n < m)
        {
            break;
        }
    }
    przelot tab[n];
    cout << "Podpunkt A) --------------------" << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Trasa nr." << i + 1 << endl;
        cout << "Podaj cel lotu: " << endl;
        cin >> tab[i].trasa;
        cout << "Podaj cene biletu: " << endl;
        cin >> tab[i].cena;
        cout << "Podaj dlugosc trasy: (km)" << endl;
        cin >> tab[i].ilosc;
        cout << "Podaj czas lotu: (godziny)" << endl;
        cin >> tab[i].czas;
        cout << "Podaj nazwe linii: " << endl;
        cin >> tab[i].linia;
    }
    cout << "Podpunkt 😎 --------------------" << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Cel lotu: " << tab[i].trasa << endl;

        cout << "Cena biletu: " << tab[i].cena << endl;

        cout << "Dlugosc trasy: " << tab[i].ilosc << endl;

        cout << "Czas lotu: " << tab[i].czas << endl;

        cout << "Nazwa lini: " << tab[i].linia << endl;

        cout << endl;
    }
    cout << "Podpunkt C) --------------------" << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Cel lotu: " << tab[i].trasa << endl;

        cout << "Cena biletu: " << tab[i].cena << endl;
    }
    cout << "Podpunkt D) --------------------" << endl;
    for (i = 0; i < n; i++)
    {
        suma = tab[i].cena + suma;
    }
    srednia = suma / n;
    cout << "Srednia cen biletow wynosi: " << srednia << endl;
    cout << "Podpunkt E) --------------------" << endl;
    mx = tab[0].ilosc;
    for (i = 1; i < n; i++)
    {
        if (mx < tab[i].ilosc)
        {
            mx = tab[i].ilosc;
            p = i;
        }
    }
    cout << "Najdluzsza trasa: " << tab[p].trasa << endl;
    cout << "Dlugosc: " << mx << endl;
    cout << "Podpunkt F) --------------------" << endl;
    for (i = 0; i < n; i++)
    {
        b = tab[i].cena / tab[i].ilosc;
        cout << "Cena za 1 km trasy " << i + 1 << " wynosi: " << b << endl;
    }
    return 0;
}
