#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main()
{
    int tab[20], i;
	srand(time(NULL));
    cout<<"Wylosowane liczby to: "<<endl;
	for (i = 0; i < 20; ++i)
	{


			tab[i] = rand() % 100;
			cout<<tab[i]<<" ";

	}

	return 0;

}
