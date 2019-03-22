#include <iostream>

using namespace std;

class ulamek
{
	public:
		int licznik, mianownik;
		ulamek () {}
		ulamek (float l, float m)
		{
			licznik = l;
			mianownik = m;
		}
		void wyswietl ()
		{
			cout << licznik << "/" << mianownik;
		}
		ulamek operator* (ulamek u)
		{
			return ulamek (licznik * u.licznik, mianownik * u.mianownik);
		}
		ulamek operator/ (ulamek u)
		{
			return ulamek (licznik * u.mianownik, mianownik * u.licznik);
		}
		friend ostream& operator<< (ostream&, ulamek);
};

ostream& operator<< (ostream& wyjscie, ulamek u)
{
	wyjscie << u.licznik << "/" << u.mianownik << endl;
}

int main ()
{
	ulamek u1 (3,4), u2 (3,5);
	ulamek u = u1 * u2;
	cout << u << endl; // u1.operator*(u2);
	ulamek u = u1 / u2;
	cout << u;
	return 0;
}