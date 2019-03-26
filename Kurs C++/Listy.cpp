#include <iostream>
#include <list>

using namespace std;

int main ()
{
    list <string> l;
    int n = 3;
    for (int i = 1; i <= n; i++)
    {
        string s;
        cout << "Podaj imie: " << endl;
        cin >> s;
        l.push_back(s); 
    }
    list <string>::iterator it; //* dowolna nazwa za it
    cout << "Na liscie jest " << l.size() << " elementow" << endl;
    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }

    list <string>::reverse_iterator itr; //* dowolna nazwa za itr
    cout << "Na liscie jest " << l.size() << " elementow od tylu" << endl;
    for (itr = l.rbegin(); itr != l.rend(); itr++)
    {
        cout << *itr << " ";
    }

    l.insert(l.begin(), "Piter!");
    cout << "Na liscie jest " << l.size() << " elementow" << endl;
    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }

    l.insert(l.begin(), 2, "Piter!");
    cout << "Na liscie jest " << l.size() << " elementow" << endl;
    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }

    it = l.begin();
    it++;
    l.insert(l.begin(), 2, "Wojtek");
    cout << "Na liscie jest " << l.size() << " elementow" << endl;
    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}
