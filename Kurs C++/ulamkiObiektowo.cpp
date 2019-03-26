#include <iostream>
using namespace std;
class ulamek
{
	private:
		long long licznik, mianownik;
	public:
		ulamek();
		ulamek(long long , long long ); 
		ulamek(long long);
		void skroc();//tu nie mozna const
		double dziesietny()const; //const na koñcu funkcji informuje, ¿e funkcja nie zmienia obiektu, który j¹ wywo³uje
		bool moznaSkracac() const;
		long long Licznik() const; 
		long long Mianownik() const;
		friend ulamek operator+(ulamek, ulamek);
		friend ulamek operator*(ulamek, ulamek);
		friend bool operator==(ulamek, ulamek);
		friend ostream& operator<<(ostream&, ulamek&);
		friend istream& operator>>(istream& , ulamek&);
};
long long NWD(long long, long long);
long long NWW(long long, long long);
//********************************************************
int main()
{
	ulamek u1,u2;
	cin>>u1>>u2;
	if(u1==u2)cout<<"Podales takie same ulamki\n\n";
	ulamek iloczyn=u1*u2;
	ulamek suma=u1+u2;
	cout<<endl<<u1<<" * "<<u2<<" = "<<iloczyn;
	if(iloczyn.moznaSkracac())
	{
		iloczyn.skroc();
		cout<<" = "<<iloczyn;
	}
	if(iloczyn.Mianownik()!=1) cout<<" = "<<iloczyn.dziesietny();
	cout<<endl;
	cout<<endl<<u1<<" + "<<u2<<" = "<<suma;
	if(suma.moznaSkracac())
	{
		suma.skroc();
		cout<<" = "<<suma;
	}
	if(suma.Mianownik()!=1) cout<<" = "<<suma.dziesietny();
	cout<<endl;
    return 0;
}
//********************************************************
ulamek::ulamek() {}
//--------------------------------------------------------
ulamek::ulamek(long long l, long long m) 
{
	licznik=l;
	mianownik=m;
}//-------------------------------------------------------
ulamek::ulamek(long long l)
{
	licznik=l;
	mianownik=1;
}
//--------------------------------------------------------
long long ulamek::Licznik() const {return licznik;}
long long ulamek::Mianownik() const  {return mianownik;}
//--------------------------------------------------------
double ulamek::dziesietny() const
{
	return static_cast<double>(licznik)/static_cast<double>(mianownik);
}
//--------------------------------------------------------
void ulamek::skroc()
{
	long long nwd=NWD(licznik,mianownik);
	if(nwd!=1) 
	{
		licznik=licznik/nwd;
		mianownik=mianownik/nwd;
	}
}
//---------------------------------------------------------
bool ulamek::moznaSkracac() const
{
	long long nwd=NWD(licznik,mianownik);
	if(nwd!=1) return true;
	else return false;
}
//---------------------------------------------------------
bool operator==(ulamek u1, ulamek u2)
{
	if(u1.licznik*u2.mianownik==u2.licznik*u1.mianownik) return true;
	else return false;
}
//----------------------------------------------------------
ulamek operator+(ulamek u1, ulamek u2)
{
	long long wspolny=NWW(u1.mianownik,u2.mianownik);//wspólny mianownik
	return ulamek(u1.licznik*wspolny/u1.mianownik + u2.licznik*wspolny/u2.mianownik, wspolny );
}
//---------------------------------------------------------
ulamek operator*(ulamek u1, ulamek u2)
{
	return ulamek(u1.licznik*u2.licznik,u1.mianownik*u2.mianownik);
}
//---------------------------------------------------------
ostream& operator<<(ostream& wyjscie, ulamek& u)
{
	if(u.mianownik!=1) wyjscie<<u.licznik<<"/"<<u.mianownik;  
	else wyjscie<<u.licznik;
}
//---------------------------------------------------------
istream& operator>>(istream& wejscie, ulamek& u)
{
   cout<<"Podaj licznik: ";
   wejscie>>u.licznik;
   do
   {
   		cout<<"Podaj mianownik: ";
   		wejscie>>u.mianownik;
   		if(u.mianownik==0) cout<<"Podales zero w mianowniku!!!\n";
    }
	while(u.mianownik==0);
   	ulamek v=u;
	u.skroc(); 
	if(v.licznik!=u.licznik) cout<<"Ulamek zostal skrocony: "<<v<<" = "<<u<<endl;
   	return wejscie;    
}
//---------------------------------------------------------
long long NWD(long long a, long long b)
 {
    if(b==0) return a;
    return NWD(b,a%b);
 }
//----------------------------------------------------------
 long long NWW(long long a, long long b)
 {
    return (a*b)/NWD(a,b);
 }
