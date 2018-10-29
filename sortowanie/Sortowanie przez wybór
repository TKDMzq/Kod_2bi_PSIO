#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int tab[20], i, a, p, x = 0;
    srand(time(NULL));
    for (i = 0; i <= 19; i++)
    {
        tab[i] = rand () % 101;
        cout << tab [i] << " ";
    }
    for (x = 0; x < 19; x++)
    {
        p = x;
        a = tab[x];
        for (i = x + 1; i <= 19; i++)
        {
            if (tab[i] < a)
            {
                p = i;
                a = tab[i];
            }
        }
        swap (tab[x], tab[p]);
    }
    cout << endl;
    for (i = 0; i <= 19; i++)
    {
        cout << tab [i] << " ";
    }
    return 0;
}
