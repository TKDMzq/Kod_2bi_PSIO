#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

string so (string slowo, int d)
{
    int i, j;
    for (j = d - 1; j > 0; j--)
    {
        for (i = 0; i < j; i++)
        {
            if (slowo[i] > slowo[i + 1])
            {
                swap (slowo[i], slowo[i + 1]);
            }
        }
    }
    return slowo;
}

int main()
{
    int i, a, b, c, d, e;
    fstream plik;
    fstream plik2, plik3;
    plik.open("anagram.txt", ios::in);
    plik2.open("odp_4a.txt", ios::out);
    plik3.open("opd_4b.txt", ios::out);
    string slowo1;
    string slowo2;
    string slowo3;
    string slowo4;
    string slowo5;
    for(i = 0; i <= 199; i++)
    {
     plik >> slowo1;
     plik >> slowo2;
     plik >> slowo3;
     plik >> slowo4;
     plik >> slowo5;
     a = slowo1.length();
     b = slowo2.length();
     c = slowo3.length();
     d = slowo4.length();
     e = slowo5.length();
     if (a == b && b == c && c == d && d == e)
     {
         plik2 << slowo1 << " " << slowo2 << " " << slowo3 << " " << slowo4 << " " << slowo5 << endl;
         if (so(slowo1, a) == so(slowo2, b) && so(slowo2, b) == so(slowo3, c) && so(slowo3, c) == so(slowo4, d) && so(slowo4, d) == so(slowo5, e))
         {
             plik3 << slowo1 << " ";
             plik3 << slowo2 << " ";
             plik3 << slowo3 << " ";
             plik3 << slowo4 << " ";
             plik3 << slowo5 << " ";
             plik3 << endl;
         }
     }
    }
    return 0;
}
