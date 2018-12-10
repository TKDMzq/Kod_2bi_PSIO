#include <iostream>

using namespace std;

int horner (int n, int wsp[20], int x)
{
    if (n == 1)
    {
        return wsp[0];
    }
    else
    {
        return horner(n-1, wsp, x) * x + wsp[n-1];
    }
}
int main()
{
    int x, n, wsp[20], i;
    cout << "Podaj system" << endl;
    cin >> x;
    cout << "Podaj ilosc cyfr" << endl;
    cin >> n;
    cout << "Wspolczynniki" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> wsp[i];
    }
    cout << horner (n, wsp, x);
    return 0;
}
