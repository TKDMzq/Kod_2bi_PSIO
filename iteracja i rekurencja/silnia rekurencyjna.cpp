#include<iostream>

using namespace std;

long long int silnia(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return (silnia(n - 1) * n);
}

int main()
{
   int n;
   cout << "Podaj liczbe naturalna: ";
   cin >> n;
   cout << n << "! = ";
   cout << silnia(n);
   return 0;
}
