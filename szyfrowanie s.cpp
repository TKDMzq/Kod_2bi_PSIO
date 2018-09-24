#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s, w;
  cout<<"Podaj slowo(w): "<<endl;
  int i;
  char k;
  getline(cin,s);
  w = s;
  for(i = 0; i < s.length(); i++)
    if(i % 2)
    {
       swap(w[i],w[i-1]);
    }
  cout << w << endl;
  return 0;
}
