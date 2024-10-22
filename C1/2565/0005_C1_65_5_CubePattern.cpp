#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    n--;
    for (int i = -n; i <= n; i++)
    {
        for (int j = -n; j <= n; j++)
        {
            if ((i == -n && j >= 0) || ((i == n || i == 0) && j <= 0) || (j == n && i <= 0) || ((j == -n || j == 0) && i >= 0) || j == -i+n || j == -i-n || (j == -i && i <= 0))
            {
                cout << '*';
            }
            else if (j > -i+n)
            {
                cout << ' ';
            }
            else
            {
                cout << '-';
            }
            
        }
        cout << "\n";
    }
    
    return 0;
}
