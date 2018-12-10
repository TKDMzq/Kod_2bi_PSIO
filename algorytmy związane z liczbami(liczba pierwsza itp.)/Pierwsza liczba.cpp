#include <iostream>

using namespace std;

int pierwsza(int n)
{
    int i = 2;
    while(i < n)
    {
        if (n % i == 0)
        {
            cout<<"Liczba nie jest pierwsza"<<endl;
            return 2;
        }
        else
        {
            i++;
        }
    }
    cout<<"Liczba jest pirwsza"<<endl;
    return 1;
}
int main()
{
    int n;
    cout << "podaj liczbe" << endl;
    cin >> n;
    cout << pierwsza(n);
    return 0;
}
