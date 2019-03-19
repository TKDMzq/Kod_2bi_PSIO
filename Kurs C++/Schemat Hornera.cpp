#include <iostream>

using namespace std;

int zamiana (string liczba)
{
	int wynik = liczba[0] - '0', i;
	for (i = 1; i < liczba.size(); i++)
	{
		wynik = wynik * 2;
		wynik = wynik + liczba[i] - '0';
	}
	return wynik;
}

int main ()
{
	string liczba;
	cout << "Podaj liczbe binarna: ";
	cin >> liczba;
	cout << "Liczba dziesietna: " << zamiana(liczba);
	return 0;
}
