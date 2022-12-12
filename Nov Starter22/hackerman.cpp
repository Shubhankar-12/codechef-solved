#include <bits/stdc++.h>
using namespace std;

bool prime(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (!(n % i))
            return false;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (prime(a + b))
            cout << "Alice" << endl;
        else
            cout << "Bob" << endl;
    }

    return 0;
}