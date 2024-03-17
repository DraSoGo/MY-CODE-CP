#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a;
    vector <long long> V;
    long long x = 1000000007,y,sum = 0;
    cin >> a;
    V.push_back(1);
    for (int i = 1; i < 100000; i++)
    {
        V.push_back((26*V[i-1])%x);
    }    
    for (int i = 0; i < a.length(); i++)
    {
        y = a[i] - 'a';
        if (i != a.length() - 1)
        {
            y++;
        }
        y = y*V[a.length() - i - 1];
        sum = (sum+y)%x;
    }
    cout << sum;
}