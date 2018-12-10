#include <iostream>

using namespace std;

string liczba;

int main()
{
    int a, i, c = 0;
    cout << "Podaj liczbe: " << endl;
    cin >> liczba;
    a = liczba.length();
    if ((liczba[a - 1] == '0') && (liczba[a - 2] == '0') && (liczba[a - 3] == '0'))
        {
            cout << "Jest podzielna przez 8" << endl;
        }
        else
        {
            cout << "Nie jest podzielna przez 8" << endl;
        }
    if (liczba[a - 1] == '0')
    {
        cout << "Jest podzielna przez 2" << endl;
    }
    else
    {
        cout << "Nie jest podzielna przez 2" << endl;
    }
     int licznik=0;
     for (i = 0; i < a;i++)
     {
         if (liczba[i]=='0')
         {
            licznik++;
         }
     }
     for (i = 0; i < a; i++)
     {
         if(liczba[i] == '1')
         {
             c++;
         }
     }
     if (0 > 1)
     {
         cout << "Wiêcej jest jedynek: " << licznik << endl;
     }
     else
     {
         cout << "Wiêcej jest zer: " << c << endl;
     }
    return 0;
}
