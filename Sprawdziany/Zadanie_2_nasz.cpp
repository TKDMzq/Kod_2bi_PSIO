#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    int *p, tab[20], i, licznik = 0;
    p = tab;
    srand(time(NULL));
    for (i = 0; i < 20; i++)
    {
        *p = rand () % 51 + 101;
        p = p + 1;
    }
    p = tab;
    for (i = 0; i < 20; i++)
    {
        if (*p % 3 == 0)
        {
            licznik++;
        }
        p = p + 1;
    }
    cout << "Licz podzielnych przez 3 jest: " << licznik << endl;
    return 0;
}
