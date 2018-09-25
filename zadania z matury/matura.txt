#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int n, i, k;
    cout << "Z ilu elementow ma sie skladac tablica?" << endl;
    cin>>n;
    int tab[n];
     srand(time(NULL));
    for(i=0;i<n;i++)
    {
        tab[i]=rand()%100;
        cout<<tab[i]<<" ";
    }
    int klucz=tab[0];
    int w=0;


 for (int k=1; k<n; k++)
 if (tab[k] < klucz)
 {
 swap(tab[w], tab[k]);
 w++;
 }
  cout << endl;
 for (int i=0; i<n; i++)
 cout << tab[i] << " ";


 return 0;
}
