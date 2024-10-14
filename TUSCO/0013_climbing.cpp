#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,k,x;
    stack <long long> S;
    cin >> n;
    long long A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        // cout << S.size() << " ";
        if (S.empty())
        {
            cout << -1;
        }
        else
        {
            if (A[i] > A[S.top()])
            {
                while (!S.empty() && A[i] >= A[S.top()])
                {
                    S.pop();
                }
            }
            if (S.empty())
            {
                cout << -1;
            }
            else
            {
                cout << S.top();
            }
        }
        S.push(i);
        cout << " ";
    }
    
    return 0;
}