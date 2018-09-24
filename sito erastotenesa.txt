#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n=1000, i, w; //w=wielokrotnoœæ
    bool tab[n];
    for(i=0;i<n;i++)
       tab[i]=true;
    float d=sqrt(n);
    i=2;
    while(i<d)
    {
        if(tab[i]==true)
        {
            w=i+i;
               while(w<n)
               {
                   tab[w]=false;
                   w=w+i;
               }
        }
        i++;
    }
    for(i=2;i<n;i++)
       if(tab[i]==true) cout<<i<<" ";

    return 0;
}
