#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{
	fstream plik;
	string trash;
	int liczniklin = 0, licznik = 0;
	srand(time(NULL));
	plik.open("Uczniowie.txt", ios::in);
	while (plik >> trash)
	{
		liczniklin++;
	}
	plik.close();
	liczniklin = liczniklin / 2;
	cout << liczniklin << endl;
	plik.open("Uczniowie.txt", ios::in);
	string * klasa = new string[liczniklin];
	for (licznik = 0; licznik < liczniklin; licznik++)
	{
		getline (plik, klasa[licznik]);
		cout << klasa[licznik] << endl;
	}
	cout << "Wylosowany uczen to: " << klasa[rand () % liczniklin];
	delete [] klasa;
	plik.close();
	return 0;
}
