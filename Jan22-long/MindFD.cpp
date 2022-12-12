#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, X;
        cin >> N >> X;
        bool SameFd = 0;
        int FD[N];

        for (int i = 0; i < N; i++)
        {
            cin >> FD[i];
        }
        sort(FD, FD + N);
        int count = 0, FDsum = 0;
        for (int i = N - 1; i >= 0; i--)
        {
            FDsum += FD[i];
            count++;
            if (FDsum >= X)
            {
                SameFd = 1;
                break;
            }
        }
        if (SameFd)
            cout << count << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}