#include <iostream>
#include <math.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, a;
        cin >> n >> a;
        if (a > pow(10, 8))
            cout << "Impossible" << endl;
        else
        {
            if (n % 2 == 1 && a % 2 == 0)
                cout << "Even" << endl;
            else if (n % 2 == 1 && a % 2 == 1)
                cout << "Odd" << endl;
            else
                cout << "Even" << endl;
        }
    }

    return 0;
}