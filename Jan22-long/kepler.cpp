#include <iostream>
#include <math.h>
using namespace std;

bool Kepler(int t1, int t2, int r1, int r2)
{
    return (pow(t1, 2) / pow(r1, 3) == pow(t2, 2) / pow(r2, 3));
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        short int t1, t2, r1, r2;
        cin >> t1 >> t2 >> r1 >> r2;
        if (Kepler(t1, t2, r1, r2))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}