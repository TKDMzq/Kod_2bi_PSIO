#include <iostream>

using namespace std;

int zamiana (string liczba, int system)
{
	int wynik = liczba[0] - '0', i;
	for (i = 1; i < liczba.size(); i++)
	{
		wynik = wynik * system;
		wynik = wynik + liczba[i] - '0';
	}
	return wynik;
}

int main ()
{
	string liczba;
	int system;
	cout << "Podaj system liczby: ";
	cin >> system;
	cout << "Podaj liczbe systemu " << system << ":";
	cin >> liczba;
	cout << "Liczba " << system << ": " << zamiana(liczba, system);
	return 0;
}
