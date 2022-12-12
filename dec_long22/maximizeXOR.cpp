#include <bits/stdc++.h>
using namespace std;
#define ll long long

string xorSum(string s1, string s2)
{
    ll firstOnes = 0, firstZeros = 0;
    ll SecOnes = 0, SecZeros = 0;
    for (auto i : s1)
        if (i == '1')
            firstOnes++;
    for (auto i : s2)
        if (i == '1')
            SecOnes++;
    firstZeros = s1.length() - firstOnes;
    SecZeros = s2.length() - SecOnes;
    ll ansOnes = min(max(firstOnes, SecOnes), max(firstZeros, SecZeros)) + min(min(firstOnes, SecOnes), min(firstZeros, SecZeros));
    ll ansZeros = s1.length() - ansOnes;
    string ans = "";
    for (int i = 0; i < ansOnes; i++)
    {
        ans += '1';
    }
    for (int i = ansOnes; i < s1.length(); i++)
    {
        ans += '0';
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        cout << xorSum(s1, s2) << endl;
    }

    return 0;
}