#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int za, zb, santa = INT_MAX;
        cin >> za >> zb;
        string s;
        cin >> s;
        int wer[za];
        int count = 0;
        for (int i = 1; i < za; i++)
        {
            if (s[i - 1] != s[i])
            {
                count++;
                wer[i] = count;
            }
            else
                wer[i] = count;
        }
        wer[0] = 0;
        for (int i = za - 1; i >= 0; i--)
        {
            if ((i - (zb - 1)) < 0)
                break;
            int dekh = wer[i] - wer[i - zb + 1];
            if (s[i] == '0')
                dekh++;
            santa = min(santa, dekh);
        }
        cout << santa << endl;
    }
}