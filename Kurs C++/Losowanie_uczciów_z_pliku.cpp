#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{
	const int liczbauczniow = 10;
	fstream plik;
	int i = 0;
	string uczniowie[liczbauczniow];
	plik.open("Uczniowie.txt", ios::in);
	srand(time(NULL));
	while (!plik.eof())
	{
		getline (plik, uczniowie[i]);
		i++;
	}
	cout << uczniowie[rand () % i];
	plik.close();
	return 0;
}
