#include <iostream>

using namespace std;

int main()
{
    int w, s, x, tab[100], i;
    cout << "Podaj liczbe" << endl;
    cin >> x;
    cout << "Podaj stopien" << endl;
    cin >> s;
    for(i = 0; i <= s; i++)
    {
    cout << "Podaj wspolczynnik" << endl;
    cin >> tab[i];
    }
    w = tab[0];
    for (i = 1; i <= s; i++)
    {
    w = w * x + tab[i];
    }
    cout << "Wynik to " << w << endl;
    return 0;
}
