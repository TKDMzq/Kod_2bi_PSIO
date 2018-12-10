#include<iostream>

using namespace std;

long long int Fibo(int n)
{
    if(n==1) return 0;
    if(n==2) return 1;
    return (Fibo(n-1)+Fibo(n-2));
}

int main()
{
   int n;
   cout << "Podaj numer ciagu: ";
   cin >> n;
   cout<<Fibo(n);
   
   
   
   return 0;
}
