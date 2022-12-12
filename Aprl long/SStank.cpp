#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int fst = a * 10;
        int sec = b * 5;
        if (fst > sec)
            cout << "FIRST" << endl;
        else if (fst < sec)
            cout << "SECOND" << endl;
        else
            cout << "ANY" << endl;
    }

    return 0;
}