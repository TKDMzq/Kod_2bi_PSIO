#include <iostream>

using namespace std;

string liczba;

int main()
{
    int a;
    cout<<"Podaj liczbe: "<<endl;
    cin>>liczba;

    a=liczba.length();

    if((liczba[a-1]=='0')&&(liczba[a-2]=='0')&&(liczba[a-3]=='0'))
    {
        cout<<"Jest podzielna przez 8"<<endl;
    }
    else
    {
        cout<<"Nie jest podzielna przez 8"<<endl;
    }

    return 0;
}