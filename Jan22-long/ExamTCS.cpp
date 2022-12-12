#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        short int drag[3], slt[3];
        int s1 = 0, s2 = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> drag[i];
            s1 += drag[i];
        }

        for (int i = 0; i < 3; i++)
        {
            cin >> slt[i];
            s2 += slt[i];
        }
        if (s1 > s2)
            cout << "Dragon" << endl;
        else if (s1 < s2)
            cout << "Sloth" << endl;
        else
        {
            if (drag[0] > slt[0])
                cout << "Dragon" << endl;
            else if (drag[0] < slt[0])
                cout << "Sloth" << endl;
            else
            {
                if (drag[1] > slt[1])
                    cout << "Dragon" << endl;
                else if (drag[1] < slt[1])
                    cout << "Sloth" << endl;
                else
                {
                    if (drag[2] > slt[2])
                        cout << "Dragon" << endl;
                    else if (drag[2] < slt[2])
                        cout << "Sloth" << endl;
                    else
                        cout << "Tie" << endl;
                }
            }
        }
    }

    return 0;
}