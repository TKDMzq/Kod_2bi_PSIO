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
};


int main ()
{
	ulamek u1 (3,4), u2 (3,5);
	ulamek u = u1 * u2; // u1.operator*(u2);
	u.wyswietl();
	return 0;
}