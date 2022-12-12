#include <iostream>
using namespace std;

int main()
{
    short int t;
    cin >> t;
    while (t--)
    {
        int a, b, x;
        cin >> a >> b;
        x = 21 - (a + b);
        if (x > 0 && x < 11)
            cout << x << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}
