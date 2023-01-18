#include <bits/stdc++.h>
using namespace std;

int lcm(int a, int b)
{
    return (a / __gcd(a, b)) * b;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int pl1, pl2;
        cin >> pl1 >> pl2;
        int yde = __gcd(pl1, pl2);
        cout << lcm(pl1, yde) - __gcd(pl2, yde) << endl;
    }
    return 0;
}