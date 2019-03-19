#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{
	fstream plik, plik2;
	int klucz = 2;
	char z;
	plik.open("Uczniowie.txt", ios::in);
	plik2.open("zaszyfrowane.txt", ios::out);
	plik >> noskipws;
	while (plik >> z)
	{
		z += klucz;
		plik2 << z;
	}
	plik.close();
}
