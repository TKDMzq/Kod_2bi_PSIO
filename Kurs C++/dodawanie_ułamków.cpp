#include <iostream>

using namespace std;

class ulamek
{
    public:
        int licznik;
        int mianownik;

        ulamek (int licz, int mian)
        {
            mianownik = mian;
            licznik = licz;
        }
        int nwd (int a, int b)
        {
            if (a == 0) 
            return b; 
            return nwd(b % a, a); 
        }
        ulamek skroc(ulamek in)
        {
            //znajdz Największą Wspólną wielokrotność 
            //i podziel przez nią mianownik i licznik 
            int nwdd = nwd(in.licznik, in.mianownik);    
            return ulamek((in.licznik / nwdd) , (in.mianownik / nwdd));
        }
        ulamek operator+(ulamek prawy)
        {
            //!  a/b + c/d  = ((a * d) + (c * b)) / (b * d)
            return skroc (ulamek (  ((licznik * prawy.mianownik) + (prawy.licznik * mianownik)),
            //!   skracam                                            //! ^ licznik
            (mianownik * prawy.mianownik) ));
    }                   // ! ^ mianownik
};

int main(int argc, char const *argv[])
{
    ulamek a(3, 7), b(1,10);
    a = a + b;
    cout << a.licznik << "  " << a.mianownik;
    return 0;
}