#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,k,ch = 0;
    vector <int> A;
    vector <int> ANS;
    cin >> n >> k;
    long long B[n+2];
    B[0] = -1;
    B[n+1] = -1;
    for (long long i = 1; i <= n; i++)
    {
        cin >> B[i];
    }
    for (long long i = 1; i <= n; i++)
    {
        if (B[i] > B[i-1] && B[i] > B[i+1])
        {
            A.push_back(B[i]);
        }
    }
    sort(A.begin(),A.end(),greater <int>());
    A.erase(unique(A.begin(),A.end()),A.end());
    if (A.size() >= k)
    {
        for(auto i:A)
        {
            cout << i << "\n";
            ch++;
            if (ch == k)
            {
                break;
            }
        }
    }
    else
    {
        for (int i = A.size()-1; i >= 0; i--)
        {
            cout << A[i] << "\n";
        }
    }
    if (A.empty())
    {
        cout << -1;
    }
    return 0;
}