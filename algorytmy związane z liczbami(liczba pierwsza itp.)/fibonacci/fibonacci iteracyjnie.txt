#include<iostream>

using namespace std;

int s;
int tab[100];

int main()
{
   cout << "Podaj liczbe: ";
   cin >> s;

   tab[1]=0;
   tab[2]=1;

   for(int i=3;i<=s;i++)
   {
       tab[i]=tab[i-1]+tab[i-2];
   }

   cout<<tab[s];

   return 0;
}
