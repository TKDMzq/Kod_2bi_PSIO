#include <iostream>
#include "Head.h"

using namespace std;

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
