#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string pat;
    cin >> n >> pat;
    string str = pat + pat;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0 && str.substr(i,n) == pat)
        {
            cout << i;
            break;
        }
    }
}