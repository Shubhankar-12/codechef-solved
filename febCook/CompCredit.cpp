#include <bits/stdc++.h>
using namespace std;

int main()
{
    short int t;
    cin >> t;
    while (t--)
    {
        short int n;
        cin >> n;
        if (n > 65)
            cout << "Overload" << endl;
        else if (n < 35)
            cout << "Underload" << endl;
        else
            cout << "Normal" << endl;
    }

    return 0;
}