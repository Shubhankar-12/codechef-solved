#include <bits/stdc++.h>
using namespace std;
#define ll long long
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll b, c;
        cin >> b >> c;
        cout << c / gcd(b, c) << endl;
    }

    return 0;
}