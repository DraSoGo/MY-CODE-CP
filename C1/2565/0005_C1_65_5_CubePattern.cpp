#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    a--;
    for (int i = -a; i <= a; i++)
    {
        for (int j = -a; j <= a; j++)
        {
            if (i == -j-a || (i == -a && j >= 0) || (i == -j && i <= 0) || (j == a && i <= 0) || (i == 0 && j <= 0) || i == -j + a || (j <= 0 && i == a) || (j == 0 && i >= 0) || (j == -a && i >= 0))
            {
                cout << "*";
            }
            else if (i < -j + a)
            {
                cout << "-";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
}