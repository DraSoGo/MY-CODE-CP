#include <bits/stdc++.h>
using namespace std;

const long long n = (2e8);
bitset <n> B;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long t,q,idx;
    vector <long long> A;
    A.emplace_back(2);
    for (long long i = 3; i < n; i+=2)
    {
        if (B[i] == 0)
        {
            A.emplace_back(i);
            for (long long j = i*i; j < n; j+=i*2)
            {
                B[j] = 1;
            }
        }
    }
    cin >> t;
    while (t--)
    {
        cin >> q;
        idx = lower_bound(A.begin(),A.end(),q)-A.begin();
        if (q == A[idx])
        {
            cout << idx+1;
        }
        else
        {
            cout << A[idx-1];
        }
        cout << "\n";
    }
    
    return 0;
}