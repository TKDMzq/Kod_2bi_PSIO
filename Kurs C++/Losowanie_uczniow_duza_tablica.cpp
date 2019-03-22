#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{
	fstream plik;
	int licznik = 0;
	string klasa[1000];
	srand(time(NULL));
	plik.open("Uczniowie.txt", ios::in);
	if (plik.good())
	{
		while (getline (plik, klasa[licznik]))
		{
			cout << klasa[licznik] << endl;
			licznik++;
		}
		cout << "Wylosowany uczen to: " << klasa[rand () % (licznik - 1)];
	}
	else
	{
		cout << "Problem z wczytaniem" << endl;
	}
	plik.close();
	return 0;
}