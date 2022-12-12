#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n - 1];
        int arrA[n - 1] = {0}, arrB[n - 1] = {0};
        for (int i = 0; i < n - 1; i++)
        {
            cin >> arr[i];
            if (i == 0)
                continue;
            arrA[i] += arra[i - 1];
        }
        int t = 0;
        for (int i = 1; i < n - 1; i++)
        {
        }
        cout << t << endl;
    }
    return 0;
}
