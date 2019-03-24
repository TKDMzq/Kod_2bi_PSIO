#include <iostream>
#include <string>

using namespace std;

struct faktura
{
    float cena;
    int year, id;
};

int main()
{
    int i;
    faktura tab[5];
    for(i = 0; i < 5; i++)
    {
        cout << "Podaj rok: ";
        cin >> tab[i].year;
        cout << "Podaj cene: ";
        cin >> tab[i].cena;
        cout << "Podaj indentyfikator klienta: ";
        cin >> tab[i].id;
    }
    for(i = 0; i < 5; i++)
    {
        if (tab[i].year >= 2019 && tab[i].cena < 200 && tab[i].cena > 100)
        {
            cout << tab[i].cena << " ";
            cout << tab[i].id;
        }
    }
    return 0;
}
