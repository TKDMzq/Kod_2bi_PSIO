#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    int *p, tab[20], tab1[20], i, licznik = 0, *b;
    p = tab;
    srand(time(NULL));
    for (i = 0; i < 20; i++)
    {
        *p = rand () % 51 + 101;
        p = p + 1;
    }
    b = tab1;
    for (i = 0; i < 20; i++)
    {
        *b = rand () % 51 + 101;
        b = b + 1;
    }
    p = tab;
    b = tab1;
    for (i = 0; i < 20; i++)
    {
        if (*p == *b)
        {
            licznik++;
        }
        p = p + 1;
        b = b + 1;
    }
    cout << "Liczb takich samych na takich samych pozycjach jest: " << licznik << endl;
    return 0;
}
