#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        bool flag = 0;
        if (s == "1" || s == "0")
        {
            cout << "No" << endl;
            flag = 1;
        }
        else
        {
            for (int i = 0; i < s.length(); i++)
            {
                if (s[i] == '1' && (s[i + 1] == '1' || s[i + 1] == '0'))
                {
                    flag = 1;
                    cout << "Yes" << endl;
                    break;
                }
            }
        }
        if (!flag)
            cout << "No" << endl;
    }

    return 0;
}