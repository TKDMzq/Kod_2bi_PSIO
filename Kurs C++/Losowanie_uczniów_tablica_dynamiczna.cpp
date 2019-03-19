#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{
	fstream plik;
	string trash;
	int i = 0, j = 0;
	srand(time(NULL));
	plik.open("Uczniowie.txt", ios::in);
	while (plik >> trash)
	{
		i++;
	}
	plik.close();
	i = i / 2;
	cout << i << endl;
	plik.open("Uczniowie.txt", ios::in);
	string * klasa = new string[i];
	for (j = 0; j < i; j++)
	{
		getline (plik, klasa[j]);
		cout << klasa[j] << endl;
	}
	cout << "Wylosowany uczen to: " << klasa[rand () % i];
	delete [] klasa;
	plik.close();
	return 0;
}
