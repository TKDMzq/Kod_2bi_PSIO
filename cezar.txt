#include <iostream>

using namespace std;

string slowo;

int main()
{
    int dlugosc, i;
    int klucz;
    cout<<"Podaj klucz: "<<endl;
    cin>>klucz;
    cout<<"Podaj slowo: "<<endl;
    cin>>slowo;
    dlugosc=slowo.length();

    for(i=0;i<dlugosc;i++)
    {

        if(slowo[i]+klucz<=122)
            slowo[i]=slowo[i]+klucz;
        else
            slowo[i]=slowo[i]+klucz-26;
    }
        cout<<slowo;

    return 0;
}

