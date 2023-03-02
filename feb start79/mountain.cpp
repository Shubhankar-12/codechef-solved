#include <bits/stdc++.h>
using namespace std;

const int MAXN = 3e4 + 5;

int N, M, Q, S[MAXN];
int P[MAXN], K[MAXN], L[MAXN][MAXN], A[MAXN][MAXN];
// main
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> M >> Q;
    for (int i = 1; i <= Q; i++)
    {
        cin >> S[i];
    }

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            A[i][j] = i;
        }
    }

    for (int h = min(N, M); h >= 1; h--)
    {
        for (int i = 1; i <= N - h + 1; i++)
        {
            int sum = 0;
            for (int j = 1; j <= h; j++)
            {
                sum += A[i + j - 1][L[h][j]];
            }
            if (sum == S[1])
            {
                P[1] = i;
                K[1] = h;
                for (int j = 1; j <= h; j++)
                {
                    cout << L[h][j] << " ";
                }
                cout << "\n";
                break;
            }
        }
        if (P[1] != 0)
        {
            break;
        }
    }

    for (int i = 2; i <= Q; i++)
    {
        bool found = false;
        for (int h = min(N, M); h >= 1; h--)
        {
            for (int i = 1; i <= N - h + 1; i++)
            {
                int sum = 0;
                for (int j = 1; j <= h; j++)
                {
                    sum += A[i + j - 1][L[h][j]];
                }
                if (sum == S[i])
                {
                    P[i] = i;
                    K[i] = h;
                    for (int j = 1; j <= h; j++)
                    {
                        cout << L[h][j] << " ";
                    }
                    cout << "\n";
                    found = true;
                    break;
                }
            }
            if (found)
            {
                break;
            }
        }
        if (!found)
        {
            cout << "-1\n";
        }
    }

    return 0;
}
