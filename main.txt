#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void scal(int tab[],int L,int P)
{
    int i=L,iL ,iP ,sr=(L+P)/2 ,nowa[20];
    iL = L;
    iP = sr+1;

    for (int j = 0 ; j<20;j++)
    {
        nowa[j]= tab[j];
    }
    while(iL<=sr && iP <=P)
    {
        if (nowa[iL]< nowa[iP])
        {
            tab[i] = nowa[iL];
            i++;iL++;
        }
        else
        {
            tab[i] = nowa[iP];
            i++;iP++;
        }
        if (iL > sr)
        while(iP<=P)
        {
            tab[i] = nowa[iP];
            i++;iP++;
        }
        if (iP > P)
        while(iL<=sr)
        {
            tab[i] = nowa[iL];
            i++;iL++;
        }


    }
}

void dziel(int tab[],int L, int P)
{
   int sr = (L+P)/2;
   if (L<sr) dziel(tab,L,sr);
   if (sr<P) dziel(tab,sr+1,P);
   scal(tab,L,P);

}

int main()
{
    int tab[20];
    srand(time(NULL));

    for (int i = 0; i < 20 ; i++)
    {
        tab[i]= rand()%100;
        cout << tab[i]<<" ";
    }
    cout << endl;
    dziel(tab,0,19);
    for (int i = 0; i < 20 ; i++)
    {
        cout << tab[i]<<" ";
    }

    return 0;
}
