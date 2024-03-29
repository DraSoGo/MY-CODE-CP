#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,s,mx = 0,ch;
    stack <long long> A;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (A.empty())
        {
            A.push(s);
        }
        else
        {
            if (s > A.top())
            {
                mx = max(mx,A.top());
                A.push(s);
            }
            else if (s == A.top())
            {
                A.pop();
            }
            else
            {
                mx = max(mx,s);
            }
        }
    }
    cout << mx;
    return 0;
}