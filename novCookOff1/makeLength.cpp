#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string bin;
        cin >> bin;
        stack<char> st;
        st.push(bin[0]);
        for (int i = 1; i < n; i++)
        {
            if (st.top() == bin[i])
            {
                st.pop();
                st.push(0);
            }
            else
                st.push(bin[i]);
        }
        if (st.size() == 1)
            cout << "YES" << endl;
        else
        {
            char tmp = st.top();
            st.pop();
            while (!st.empty() && st.top() == tmp)
            {
                st.pop();
            }
            if (st.empty())
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}