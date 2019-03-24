#include <iostream>
#include <algorithm> 
#include <fstream>

using namespace std;

string palin (string slowo) 
{
    reverse(slowo.begin(),slowo.end());
    return slowo;
}

int main()
{
    string slowo;
    fstream plik;
    int d, licznik = 0, licznik1 = 0;
    plik.open("tekst.txt", ios::in);
    while ( !plik.eof() ) 
    {
        plik >> slowo;
        if (slowo == palin(slowo))
        {
            licznik++;
        }
        d = slowo.length();
        if (d % 2 == 0)
        {
            licznik1++;
        }
    }
    cout << "Slow ktore maja parzysta dlugosc jest: " << licznik1 << endl;
    cout << "Slow ktore sa palindromami jest: " << licznik << endl;
    return 0;
}