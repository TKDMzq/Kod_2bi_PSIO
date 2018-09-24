#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    cout << "Z ilu liczb ma sie skladac tablica? (parzysta ilosc)" << endl;
    int n, i;
    cin>>n;
    int a[n];
    srand (time(NULL));
    for(i=0;i<n;i++)
    {
        a[i]=rand()%100;
        cout<<a[i]<<" ";
    }
    i=0;
    while(i<n)
    {
        if (a[i]>a[i+1]) swap(a[i],a[i+1]);
        i=i+2;
    }
    int mini=a[0];
    int maxi=a[1];
    i=2;
    while (i<n)
    {
        if (a[i]<mini) mini=a[i];
        if (a[i+1]>maxi) maxi=a[i+1];
        i=i+2;
    }
    cout<<"Najmniejsza to:"<<mini<<endl;
    cout<<"Najwieksza to:"<<maxi<<endl;

    return 0;
}
