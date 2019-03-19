#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{
	fstream plik, plik2;
	int i = 0;
	string klucz = "1234";
	char g;
	plik.open("Uczniowie.txt", ios::in);
	plik2.open("zaszyfrowane.txt", ios::out);
	plik >> noskipws;
	while (plik >> g)
	{
		g += klucz[i];
		plik2 << g;
		if (i == klucz.length())
		{
			if (!plik.eof() == true)
			{
				break;
			}
			else
			{
				i = 0;
			}	
				
		}
		else
		{
			i++;
		}
	}
	plik.close();
	return 0;
}