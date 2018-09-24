#include <iostream>

using namespace std;

int main()
{
    int a, tab[30], i=0, j, s=1, w=0, sys;
    cout<<"Podaj liczbe a"<<endl;
    cin>>a;
    cout<<"jaki system"<<endl;
    cin>>sys;

    while(a!=0)
    {
        tab[i]=a%10;
        a=a/10;
        i++;
    }
    for(j=0;j<i;j++)
    {
        w=w+tab[j]*s;
        s=s*sys;

    }
    cout<<w;

    return 0;
}
