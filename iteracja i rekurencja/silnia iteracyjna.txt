#include<iostream>

using namespace std;

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
