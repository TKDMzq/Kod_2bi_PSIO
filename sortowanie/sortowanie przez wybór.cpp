#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int i, j, a, n;
    cout << "Z ilu elementow ma sie skladac tablica?"<<endl;
    cin >> n;
    int tab[n];
    srand(time(NULL));
    for (i = 0; i < n; i++)
    {
        tab[i] = rand () % 101;
        cout << tab[i] << " ";
    }
    for (j = 0; j < n - 1; j++)
    {
       a = tab[j];
       int p = j; //p=pozycja
    for (i = j + 1; i < n; i++)
    {
        if (tab[i] < a)
        {
            a = tab[i];
            p = i;
        }
    }
    swap(tab[j], tab[p]);
    }
    cout<<endl;
    for (i = 0; i < n; i++)
    {
        cout << tab[i] << " ";
    }
    cout << endl;
    cout << a;
    cout << endl;
    cout << p;
    return 0;
}
