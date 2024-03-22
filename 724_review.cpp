#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int m;
    cin >> m;
    for (int j = 0; j < m; j++)
    {
        int n;
        string pat;
        cin >> pat;
        n = pat.size();
        string str = pat + pat;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0 && str.substr(i,n) == pat)
            {
                cout << str.substr(0,i) << "\n";
                break;
            }
        }
    }
    
    return 0;
}