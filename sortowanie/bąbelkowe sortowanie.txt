#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main()
{
    int tab[20], i=0, j;
	srand(time(NULL));
    cout<<"Wylosowane liczby to: "<<endl;
	while(i<20)
    {
        tab[i] = rand() % 100;
        i++;
    }

	for (j = 19; j>0; j--)
	{
            for(i=0; i<j;i++)
            {
                if(tab[i]>tab[i+1])
                    swap(tab[i], tab[i+1]);
            }
	}

    for(i=0;i<19;i++)
    cout<<tab[i]<<" ";
	return 0;

}