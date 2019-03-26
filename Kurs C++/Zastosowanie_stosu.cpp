#include <iostream>
#include <windows.h>
#include <stack>
#include <conio.h>


using namespace std;

int main ()
{
    stack <string> na_sztosz;
    char znak;
    string nazwa;
    do 
    {
        cout << "Podaj string na stos: " << endl;
        cin >> nazwa;
        na_sztosz.push(nazwa);
        cout << "Podajemy dalej? T / inny znak" << endl;
        znak = getch();
        cout << endl << endl;
    }
    while (znak == 't' || znak == 'T');
    cout << "Oto nasz sztos" << endl;
    while (!na_sztosz.empty())
    {
        cout << na_sztosz.top() << endl;
        na_sztosz.pop();
    }
    system("pause");
    return 0;
}