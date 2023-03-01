#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll xd, yz;
        cin >> xd >> yz;
        if (xd == yz)
        {
            if (xd % 2 != 0)
            {
                cout << "CHEF" << endl;
                continue;
            }
            else
            {
                cout << "CHEFINA" << endl;
                continue;
            }
        }
        ll drfs = abs(xd - yz);
        if (drfs >= 2 && xd > yz)
        {
            cout << "CHEF" << endl;
            continue;
        }
        else if (drfs >= 2 && xd < yz)
        {
            cout << "CHEFINA" << endl;
            continue;
        }
        if (xd % 2 != 0 && xd > yz)
        {
            cout << "CHEFINA" << endl;
            continue;
        }
        else if (xd % 2 == 0 && xd > yz)
        {
            cout << "CHEF" << endl;
            continue;
        }
        else if (yz % 2 == 0 && xd < yz)
        {
            cout << "CHEF" << endl;
            continue;
        }
        else if (yz % 2 != 0 && xd < yz)
        {
            cout << "CHEFINA" << endl;
            continue;
        }
    }

    return 0;
}