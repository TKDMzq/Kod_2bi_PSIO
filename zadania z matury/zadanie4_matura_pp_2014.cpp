#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int NWD (int x, int y)
{
    while (x != y)
    {
        if (x > y)
        {
            x = x - y;
        }
        else
        {
            y = y - x;
        }
    }
    return x;
}

int suma (int x)
{
    int suma = 0;
    while (x != 0)
    {
        suma = suma + x % 10;
        x = x / 10;
    }
    return suma;
}

int main()
{
    fstream plik;
    plik.open("PARY_LICZB.txt", ios::in);
    fstream zapis;
    zapis.open("ZADANIE5.txt", ios::out);
    int x, y, licznik = 0, licznik_1 = 0, licznik_2 = 0;
    while (!plik.eof())
    {
        plik >> x >> y;
        if(x % y == 0 || y % x == 0)
        {
            licznik++;
        }
        if (NWD(x,y) == 1)
        {
            licznik_1++;
        }
        if (suma(x) == suma(y))
        {
            licznik_2++;
        }
    }
    zapis << "A: " << licznik << endl;
    zapis << "B: " << licznik_1 << endl;
    zapis << "C: " << licznik_2 << endl;
    return 0;
}
