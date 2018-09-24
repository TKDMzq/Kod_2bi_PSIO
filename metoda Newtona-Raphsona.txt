#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a;
    float d=0.001, x=1, y;
    cout<<"Podaj liczbe"<<endl;
    cin>>a;
    y=a;
    while (abs(x-y)>d)
    {
        x=(x+y)/2;

        y=a/x;
    }
    cout<<"Pierwiastek wynosi: "<<x<<endl;
    return 0;
}
