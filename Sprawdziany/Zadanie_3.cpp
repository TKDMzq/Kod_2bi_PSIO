#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream plik;
    string x;
    int d, i = 0;
    plik.open("liczby.txt", ios::in);
    while (!plik.eof())
    {
        plik >> x;
        d = x.length();
        if (x[d - 1] == '0')
        {
            i++;
        }
    }
    cout << "Liczb parzystych jest: " << i << endl;
}
