#include <iostream>

using namespace std;

int pierwsza(int n)
{
     int i = 2;
     while(i < n)
     {
         if(n % i == 0)
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
    cout << "Podaj liczbe" << endl;
    cin >> n;
    int p = 2;
    while(n > 1)
    {
       if (pierwsza(p) == 1)
       {
           while (n % p == 0)
          {
            n = n / p;
            cout << p << ",";
          }
          p++;
       }
    }
    return 0;
}
