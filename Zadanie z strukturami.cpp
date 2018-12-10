#include <iostream>

using namespace std;

struct student
{
    string imie, nazwisko;
    int wiek, rok;
    float stypN, stypS;
};

int main()
{
    int i, d, r, suma = 0, g = 0;
    float x = 0, p;
    student tab[3];
    cout << "--------------------A----------------------" << endl;
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
    cout << "--------------------B----------------------" << endl;
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
    cout << "--------------------C----------------------" << endl;
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
    cout << "--------------------D----------------------" << endl;
    for (i = 0; i < 3; i++)
    {
        if (tab[i].rok == 1)
        {
           suma = suma + tab[i].stypS;
        }
    }
    cout << "Suma stypendiow studentow I roku: " << suma;
    cout << "--------------------E----------------------" << endl;
    for (i = 0; i < 3; i++)
    {
        if(tab[i].stypN > x)
        {
            x = tab[i].stypN;
        }
    }
    for (i = 0; i < 3; i++)
    {
        if(tab[i].stypN == x)
        {
            cout << "Nazwisko: " << tab[i].nazwisko << endl;
        }
    }
    cout << "--------------------F----------------------" << endl;
    p = tab[0].stypS;
    for (i = 1; i < 3; i++)
    {
        if (p > tab[i].stypS)
        {
            p = tab[i].stypS;
        }
    }
    for (i = 0; i < 3; i++)
    {
        if (tab[i].stypS == p)
        {
            g++;
        }
    }
    cout << "Liczba uczniow z najnizszym stypendium wynosi: " << g << endl;
    return 0;
}
