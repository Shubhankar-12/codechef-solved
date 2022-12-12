#include <iostream>
using namespace std;

int Satisfy(int a1, int a2, int b1, int b2, int c1, int c2)
{
    int sum = max((a1 + a2), (b1 + b2));
    sum = max(sum, (c1 + c2));
    return sum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a1, a2, b1, b2, c1, c2;
        cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
        cout << Satisfy(a1, a2, b1, b2, c1, c2) << endl;
    }

    return 0;
}