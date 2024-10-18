#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    double a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (ceil(a) == floor(a))
        {
            cout << "OK\n";
        }
        else
        {
            cout << "NOT INTEGER\n";
        }
        
    }
    
    return 0;
}
