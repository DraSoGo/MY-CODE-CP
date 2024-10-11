#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n-1 || j == 0 || j == n-1 || i == (n-1)/2 || j == (n-1)/2)
            {
                cout << "*";
            }
            else
            {
                cout << "_";
            }
        }
        cout << "\n";
    }
    return 0;
}
