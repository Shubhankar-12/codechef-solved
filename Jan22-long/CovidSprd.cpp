#include <iostream>
using namespace std;
#define ll long long

ll CovSpr(ll N, ll D)
{
    int i = 1;
    ll ans = 1;
    while (i <= D && ans <= N)
    {
        if (i <= 10)
            ans *= 2;
        if (i > 10 && i <= 20)
            ans *= 3;
        i++;
    }
    if (ans > N)
        return N;

    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, d;
        cin >> n >> d;
        cout << CovSpr(n, d) << endl;
    }

    return 0;
}