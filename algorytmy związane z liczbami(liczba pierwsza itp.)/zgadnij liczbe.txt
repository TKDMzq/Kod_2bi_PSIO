#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int a, b;

int main()
{
    srand(time(NULL));
    cout<<"Zgadnij jaka to liczba: "<<endl;
    a=rand()%1000;
    cout<<"Podaj liczbe: ";
    cin>>b;

    while(a!=b)
    {
        if(a/b)
            cout<<"za mala"<<endl;
        else
            cout<<"za duza"<<endl;
        cout<<"Podaj liczbe: ";
        cin>>b;

    }
    cout<<"Wylosowana liczba: "<<a<<endl;
    return 0;
}
