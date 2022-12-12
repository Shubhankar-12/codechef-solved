#include <iostream>
using namespace std;

int main()
{
    short int t;
    cin >> t;
    while (t--)
    {
        int m, x, temp, count = 0;
        cin >> m >> x;
        temp = x;
        while (count != x)
        {
            temp = temp % m;
            cout << temp << " ";
            count++;
        }
        cout << endl;
    }

    return 0;
}