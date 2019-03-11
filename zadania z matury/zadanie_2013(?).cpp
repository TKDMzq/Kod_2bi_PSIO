#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    fstream plik;
    fstream odp;
    plik.open("napisy.txt", ios::in);
    odp.open("odp.txt", ios::out);
    string odczyt;
    int licznik[16] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int dlg;
    int l(0);
    int lz(0), lj(0), ll(0);
    for(int i = 0; i < 1000; i++)
    {
        //a
        plik >> odczyt;
        dlg = odczyt.length();
        if (dlg % 2 == 0)
        {
            l++;
        }
        //b
        int zera = count(odczyt.begin(), odczyt.end(), '0');
        int jedynki = count(odczyt.begin(), odczyt.end(), '1');
        if (zera == jedynki)
        {
            lj++;
        }
        //c
        if (count(odczyt.begin(), odczyt.end(), '0') == dlg)
        {
            lz++;
        }
        else
        {
            if (count(odczyt.begin(), odczyt.end(), '1')==dlg)
            {
               ll++;
            }
        }
        //d
    }
    for (int k(2); k < 17; k++)
    {
        if(dlg == k)
        {
            licznik[k] += 1;
        }
    }
    odp << "a: " << l << endl;
    odp << "b: " << lj << endl;
    odp << "c: " << lz << "  " << ll << endl;
    plik.close();
    odp.close();
    return 0;
}
