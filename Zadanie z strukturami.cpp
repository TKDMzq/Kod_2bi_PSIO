#include <iostream>
#include <cstdio>

using namespace std;

struct student
{
    string imie, nazwisko;
    int wiek, rok;
    float stypN, stypS;
};

int main()
{
    int i, d, r, suma = 0;
    student tab[3];
    printf ("Podpunkt A:\n");
    for (i = 0; i < 3; i++)
    {
        cout << "Podaj imie: ";
        cin >> tab[i].imie;
        cout << "Podaj nazwisko: ";
        cin >> tab[i].nazwisko;
        cout << "Podaj wiek: ";
        cin >> tab[i].wiek;
        cout << "Podaj rok studiow: ";
        cin >> tab[i].rok;
        cout << "Podaj wysokosc stypendium naukowego: ";
        cin >> tab[i].stypN;
        cout << "Podaj wysokosc stypendium socjalnego: ";
        cin >> tab[i].stypS;
        cout << endl;
    }
    printf ("Podpunkt B:\n");
    for (i = 0; i < 3; i++)
    {
        cout << tab[i].imie << " ";
        cout << tab[i].nazwisko << " ";
        cout << tab[i].wiek << " ";
        cout << tab[i].rok << " ";
        cout << tab[i].stypN << " ";
        cout << tab[i].stypS << " ";
        cout << endl;
    }
    printf ("Podpunkt C:\n");
    cout << "Ktory rok studenta?" << endl;
    cin >> r;
    for (i = 0; i < 3; i++)
    {
        d = tab[i].nazwisko.size();
        if (tab[i].nazwisko[d - 1] == 'i' && tab[i].rok == r)
        {
            cout << tab[i].nazwisko << " ";
            cout << tab[i].wiek << " ";
            cout << tab[i].stypN << " ";
        }
    }
    printf ("Podpunkt D:\n");
    for (i = 0; i < 3; i++)
    {
        if (tab[i].rok == 1)
        {
           suma = suma + tab[i].stypS; 
        }
    }
    cout << "Suma stypendiow studentow I roku: " << suma;
    printf ("Podpunkt E:\n");
    return 0;
}
