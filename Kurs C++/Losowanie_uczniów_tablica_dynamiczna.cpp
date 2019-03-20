#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{
	fstream plik;
	string trash;
	int liczniklin = 0, j = 0;
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
	for (j = 0; j < liczniklin; j++)
	{
		getline (plik, klasa[j]);
		cout << klasa[j] << endl;
	}
	cout << "Wylosowany uczen to: " << klasa[rand () % liczniklin];
	delete [] klasa;
	plik.close();
	return 0;
}
