#include <iostream>
#include <cmath>

using namespace std;

class trojkat
{
	private:
		float a, b, c;
	public:
		trojkat ()
		{
            cout << "Podaj a: " << endl;
			cin >> a;
            cout << "Podaj b: " << endl;
			cin >> b; 
            cout << "Podaj c: " << endl;
			cin >> c;
		}
		trojkat (float a_in, float b_in, float c_in)
		{
			a = a_in;
			b = b_in;
			c = c_in;
		}
		~trojkat()
		{
			cout << "NAPLULI MI W TROJKONTA" << endl;
		}
		float obwod()
		{
			return a + b + c; 
		}
		float pole()
		{
			int p;
			p = (a + b + c) / 2;
			return sqrt(p * (p - a) * (p - b) * (p - c));
		}
};

int main ()
{
	trojkat a;
	cout << a.pole() << endl;
	cout << a.obwod() << endl;
	return 0;
}