#include <bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
int pw(long long a,long long b)
{
    int id = 2,sum = 1;
    vector <long long> B;
    vector <long long> idx;
    B.push_back(1);
    B.push_back(a);
    idx.push_back(0);
    idx.push_back(1);
    while (b > idx[id-1])
    {
        B.push_back((B[id-1]%mod*B[id-1]%mod)%mod);
        idx.push_back(idx[id-1]*2);
        id++;
        // cout << idx[id] << " ";
    }
    id--;
    while (b > 0)
    {
        if (idx[id] > b)
        {
            id--;
            continue;
        }
        sum = (sum%mod * B[id]%mod)%mod;
        b -= idx[id];
        // cout << b << " " << id << " " << idx[id] << "\n";
    }
    // cout << id << "\n";
    // for(auto i : idx)
    // {
    //     cout << i << " ";
    // }
    // cout << "\n";
    // for(auto i : B)
    // {
    //     cout << i << " ";
    // }
    // cout << "\n";
    // cout << "\n";
    return sum;
}
int main()
{
    long long a,b,c,sum = 0,d;
    cin >> a;
    for (int j = 0; j < a; j++)
    {
        cin >> b >> c;
        d = pw(b,c);
        //cout << d << "\n";
        sum = (sum + d) % mod;
    }
    cout << sum;
    return 0;
}