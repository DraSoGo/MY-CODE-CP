#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = -n+1; i <= n-1; i++)
    {
        for (int j = -n+1; j <= n-1; j++)
        {
            if (abs(i) == abs(j))
            {
                cout << (n - abs(i)) % 10;
            }
            else
            {
                cout << 0;
            }
        }
        cout << "\n";
    }
}