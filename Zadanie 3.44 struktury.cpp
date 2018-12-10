#include <iostream>

using namespace std;

struct przelot 
{
    string trasa, linia;
    int cena, ilosc;
    float czas;
};

int main()
{
    int i, j, k, o, dod;
    przelot tab [5];
    for(i = 0; i < 5; i++)
    {
        cout << "Podaj trase: " << endl;
        cin >> tab[i].trasa;
        cout << "Podaj cene przelotu: " << endl;
        cin >> tab[i].cena;
        cout << "Podaj dlugosc lotu (w kilometrach): " << endl;
        cin >> tab[i].ilosc;
        cout << "Podaj czas lotu (w godzinach): " << endl;
        cin >> tab[i].czas;
        cout << "Podaj nazwe lini lotniczej): " << endl;
        cin >> tab[i].linia;
        cout << "____________________" << endl;
    }
    for (j = 0; j < sizeof(tab); j++)
    {
        cout << "trasa to: " << tab[j].trasa << endl;
        cout << "cena to: " << tab[j].cena << endl;
        cout << "dlugosc lotu w kilometrach to: " << tab[j].ilosc << endl;
        cout << "czas przelotu to: " << tab[j].czas << endl;
        cout << "linia to: " << tab[j].linia << endl;
        cout << "__________________" << endl;
    }
    for (k = 0; k < sizeof(tab); k++)
    {
        cout << tab[k].trasa << endl;
        cout << tab[k].cena << endl;
        cout << "_________________" << endl;
    }
    for (o = 0; o < sizeof(tab); o++)
    {
        dod = tab[l].cena + tab[o + 1].cena;
    }
    int sr = dod/sizeof(tab);  //liczenie sredniej ceny bietow
    cout << "srednia cena biletow na wszystkich liniach to: " << sr << endl;
    return 0;
}
