#include<iostream>

using namespace std;

long long int silnia(int n)
{
    if(n==0) return 1;
    return (silnia(n-1)*n);
}

int main()
{
   int n, a=1;
   cout << "Podaj liczbe naturalna: ";
   cin >> n;
   cout << n << "! = ";
   if (n == 0) cout<<1;
   else
{
   while (n > 0)
{
   a*= n;
   n--;
}

}
   cout << a << endl;
   return 0;
}
