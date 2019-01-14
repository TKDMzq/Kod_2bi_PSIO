#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int tab[20], tab2[20], *a, *b, i;
    srand(time(NULL));
    a = tab;
    b = tab2;
    for (i = 0; i < 20; i++)
    {
        *a = rand () % 8;
        *b = rand () % 8;
        b = b + 1;
        a = a + 1;
    }
    a = tab;
    b = tab2;
    for (i = 0; i < 20; i++)
    {
        cout << tab[i] << " ";
    }
    cout << endl;
    for (i = 0; i < 20; i++)
    {
        cout << tab2[i] << " ";
    }
    cout << endl;
    for (i = 0; i < 20; i++)
    {
        if (*a == *b)
        {
            cout << i << " ";
            a = a + 1;
            b = b + 1;
        }
        else
        {
            a = a + 1;
            b = b + 1;
        }
    }
    return 0;
}
