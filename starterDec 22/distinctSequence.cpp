#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string nib;
        cin >> n >> nib;
        int ze;
        int tr = 1;
        for (ze = 1; ze < 2 * n; ze++)
        {
            if (nib[ze] != nib[0])
            {
                tr = 0;
                break;
            }
        }
        if (!tr)
        {
            cout << 1 << " ";
            int mna = n - 1;
            int kh = 2;
            while (mna)
            {
                if (kh == ze + 1)
                    mna++;
                else
                    cout << kh << " ";
                kh++;
                mna--;
            }
        }
        else
            cout << -1;
        cout << endl;
    }
    return 0;
}