#include <iostream>

using namespace std;

int potega (int n, int a)
{
	if (a == 0)
	{
		return 1;
	}
	return potega (n, a - 1) * n;
}

int main ()
{
	int a, n;
	cout << "Podaj liczbe: " << endl;
	cin >> n;
	cout << "Podaj potege: " << endl;
	cin >> a;
	cout << potega (n, a - 1) * n;
	return 0;
}
