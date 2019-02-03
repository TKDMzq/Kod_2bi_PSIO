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
    plik.open("plik.txt", ios::in);
    while ( !plik.eof() )
    {
        plik >> slowo;
        if (slowo == palin(slowo)) 
        {
            cout << slowo << " ";
        }
    }
    return 0;
}
