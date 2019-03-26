#include <iostream>
#include <vector>

using namespace std;

int main ()
{
   vector <int> wektor;
   int n = 3, a;
   cout << "Podaj ilosc elementow: ";
   cin >> n;
   for (int i = 0; i < n; i++)
   {
       cout << "Podaj element nr " << i + 1 << ":";
       cin >> a;
       wektor.push_back(a);
   }

   for (auto x : wektor) //! wyświetlanie jak pythonowe x in range, do końca wektoru 
   {
       cout << x;
   }
   // TODO: Wyświetlanie za pomocą iteratora
   return 0;
}
