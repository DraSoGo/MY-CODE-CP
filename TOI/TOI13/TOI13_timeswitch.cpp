#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    string pat;
    cin >> n >> pat;
    string str = pat + pat;
    for (int i = 1; i <= n; i++)
    {
        // cout << str.substr(i,n) << " " << pat << "\n";
        if (n % i == 0 && str.substr(i,n) == pat)
        {
            cout << i;
            break;
        }
    }
    return 0;
}