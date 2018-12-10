#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{
    float x, y, d, p;
    int i, l = 0;

    srand (time(NULL));
    cout<< "Z ilu pkt ma sie skladac (p)?" << endl;
    cin >> p;
    for(i = 0; i < p; i++)
    {
        x = (double)rand() / RAND_MAX;
        y = (double)rand() / RAND_MAX;
        d = sqrt(pow(x,2) + pow(y,2));
        if(d <= 1)
        {
            l++;
        }
    }
    cout << "Pi wynosi" << (4*l) / p;
    return 0;
}
