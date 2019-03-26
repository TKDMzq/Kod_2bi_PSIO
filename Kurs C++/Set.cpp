#include <iostream>
#include <set>

using namespace std;

int main ()
{
   set <string> s;
   s.insert("Jan");
   s.insert("Adrian");
   set <string>::iterator it; //* Dalej można inna nazwe tego it
   for (it = s.begin(); it != s.end(); it++)
   {
       cout << *it << " ";
   }
   it = s.find("Adrian");
   cout << *it << endl;
   it++;
   return 0;
}
