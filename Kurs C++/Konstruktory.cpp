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
		osoba() //konstruktor bezparametrowy
		{
			cout << "Podaj imie: " << endl;
			cin >> imie;
			cout << "Podaj nazwisko: " << endl;
			cin >> nazwisko;
			cout << "Podaj rok urodzenia: " << endl;
			cin >> rok;
		}
		osoba(string i, string n, int r)
		{
			imie = i;
			nazwisko = n;
			rok = r;
		}
		~osoba() //destruktor
		{
			cout << imie << " " << nazwisko << " zostal skasowany\n";
		}
		int wiek() //metoda
		{
			return 2019 - rok;
		}
};

int main ()
{
	osoba x, y;
	x.wyswietl();
	cout << "Podaj dane 2 osoby: " << endl;
	y.wyswietl();
	osoba z ("Stefan", "To szef", 1994);
	z.wyswietl();
	return 0;
}