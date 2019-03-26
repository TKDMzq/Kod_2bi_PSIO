#include <iostream>
#include <map>

using namespace std;

int main ()
{
   //!  first , second
   map <string, string> m;
   m["imie"] = "Jan";
   m["Nazwisko"] = "Mokrzycki";
   cout << m["imie"] << m["nazwisko"];

   map <string, string> ::iterator it;
   // TODO: Wyświetlanie cout << it->first << ": " << it->second
   return 0;
}
