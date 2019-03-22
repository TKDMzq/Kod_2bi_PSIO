#include <iostream>

using namespace std;

class osoba
{
	private: 
		string imie, nazwisko;
		int rok;
	public:
		void wyswietl()
		{
			cout << "Imie: " << imie << endl;
			cout << "Nazwisko: " << nazwisko << endl;
			cout << "Rok: " << rok << endl;
			cout << "Ma lat: " << wiek() << endl;
		}
		void wczytaj()
		{
			cout << "Podaj imie: " << endl;
			cin >> imie;
			cout << "Podaj nazwisko: " << endl;
			cin >> nazwisko;
			cout << "Podaj rok urodzenia: " << endl;
			cin >> rok;
		}
		int wiek()
		{
			return 2019 - rok;
		}
};

int main ()
{
	osoba x, y;
	x.wczytaj();
	x.wyswietl();
	cout << "Podaj dane 2 osoby: " << endl;
	y.wczytaj();
	y.wyswietl();
	return 0;
}