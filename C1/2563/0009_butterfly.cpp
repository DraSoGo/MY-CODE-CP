#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    for (int i = -n+1; i < n; i++)
    {
        for (int j = -n+1; j < n; j++)
        {
            if (abs(i) <= abs(j))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
        
    }
    
    return 0;
}
