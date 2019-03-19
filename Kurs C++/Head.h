using namespace std;
int zamiana (string, int);
bool dobra (string, int);
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
