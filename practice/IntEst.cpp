#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll n, k;
    cin >> n >> k;
    ll cnt = 0;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % k == 0)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}