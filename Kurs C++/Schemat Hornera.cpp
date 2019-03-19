#include <iostream>

using namespace std;

bool dobra (string, int);
int zamiana (string, int);

int main ()
{
	string liczba;
	int system;
	cout << "Podaj system liczby: ";
	cin >> system;
	cout << "Podaj liczbe systemu " << system << ": ";
	cin >> liczba;
	if (dobra(liczba,system) == true)
	{
		cout << "Liczba " << system << ": " << zamiana(liczba, system);
	}
	else
	{
		cout << "Bledne dane!";
	}
	return 0;
}

bool dobra (string liczba, int system)
{
	int i;
	for (i = 0; i < liczba.size(); i++)
	{
		if (liczba[i] - '0' >= system)
		{
			return false;
		}
	}
	return true;
}

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
