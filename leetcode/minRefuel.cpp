#include <bits/stdc++.h>
using namespace std;

int minRefuelStops(int target, int startFuel, vector<vector<int>> &stations)
{
    if (target <= startFuel)
        return 0;
    if (startFuel < stations[0][0] || stations.empty())
        return -1;
    int fueled = 0, miles = 0;
    for (int i = 0; i < stations.size(); i++)
    {
        if (stations[i][0] <= startFuel)
        {
            startFuel = startFuel - stations[i][0];
            if (startFuel < stations[i + 1][0])
            {
                startFuel += stations[i][1];
                fueled++;
            }
            miles += stations[i][0];
            if (miles + startFuel >= target)
                return fueled;
        }
        else
            return -1;
    }
    return fueled;
}

int minRefuelStop(int target, int startFuel, vector<vector<int>> &stations)
{
    int n = stations.size();
    priority_queue<int> pq;
    int i = 0, j;
    for (j = 0; startFuel < target; j++)
    {
        while (i < n && stations[i][0] <= startFuel)
            pq.push(stations[i++][1]);
        if (pq.empty())
            return -1;
        startFuel += pq.top(), pq.pop();
    }
    return j;
}

int main()
{
    int t, sf;
    cin >> t >> sf;
    vector<vector<int>> v;
    for (int i = 0; i < 2; i++)
    {
        vector<int> temp;
        int a, b;
        cin >> a >> b;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);
    }
    cout << minRefuelStops(t, sf, v);
    return 0;
}