

#include<iostream>

using namespace std;

int main()
{
   int n, a=0, b=1;
   cout << "Podaj numer ciagu: ";
   cin >> n;

   for(int i=0;i<n;i++)
   {
       cout<<b<<" ";
            b += a;
            a = b-a;
   }

   cout<<b;
   return 0;
}
