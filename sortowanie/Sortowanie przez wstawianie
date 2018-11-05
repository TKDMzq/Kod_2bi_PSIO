#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int n, i, pom, k;
    cin >> n; // Podanie wielkości tablicy
    int tab[n];
    srand(time(NULL));
    for (i = 0; i < n; i++)
    {
        tab[i] = rand () % 101;
    }
    i = 1;
    while (i < n)
    {
        pom = tab[i];
        k = i - 1;
        while (k >= 0 && tab[k] > pom)
        {
            tab[k + 1] = tab[k];
            k = k - 1;
        }
        tab[k + 1] = pom;
        i = i + 1;
    }
    for (i = 0; i < n; i++)
    {
        cout << tab[i] << " ";
    }
    return 0;
}
