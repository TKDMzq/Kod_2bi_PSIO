#include <stdio.h>

int main ()
{
   float a, b, wynik;
   printf ("Podaj a = ");
   scanf ("%f", &a);
   printf ("Podaj b = ");
   scanf ("%f", &b);
   wynik = a + b;
   printf ("%g + %g = %g\n", a, b, wynik);
   return 0;
}