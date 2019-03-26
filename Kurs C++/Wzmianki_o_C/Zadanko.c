#include <stdio.h>

int main()
{
    int n, i = 2;
    scanf("%d", &n);
    while (n % i != 0)
    {
       i++;
    }
    if (n == i)
    {
       printf ("%d jest pierwsza \n", n);
    }
    else
    {
       printf ("%d nie jest pierwsza \n", n, i);
    }
    return 0;
}