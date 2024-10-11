#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,x,y;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        y = x;
        int sum = 0;
        while (x > 0)
        {
            sum += x%10;
            x/=10;
        }
        if (y % sum == 0)
        {
            cout << "YES:" << sum << "\n";
        }
        else
        {
            cout << "NO:" << sum << "\n";
        }
        
        
    }
    
    return 0;
}