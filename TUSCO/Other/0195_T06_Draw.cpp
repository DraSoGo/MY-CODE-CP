#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (i == 0 || i == a - 1 || j == 0 || j == a - 1)
            {
                cout << "#";
            }
            else
            {
                cout << "_";
            }
        }
        cout << "\n";
    }
}