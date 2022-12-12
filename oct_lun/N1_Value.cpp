#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        short int n;
        cin >> n;
        long long int a = pow(2, n);
        long long int sum = 0;
        if(n==1)
        cout << "1" << " "<<"1"<<endl;
        else{
            for (int i = 1; i <= n-1; i++)
            {
                cout << i << " ";
                sum += i;
                if (i == n - 1)
                {
                    cout << i << " ";
                    sum += i;
                }
            }
            cout << a - sum << endl;
        }
    }
    return 0;
}