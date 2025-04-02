#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,l,a,b,x,sa,sb;
    multiset <long long> A,B,S;
    vector <long long> V;
    cin >> n >> l >> a >> b;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        V.push_back(x);
    }
    sort(V.begin(),V.end());
    for (int i = 0; i < a; i++)
    {
        A.insert(V[i]);
    }
    for (int i = a; i < b-1; i++)
    {
        S.insert(V[i]);
    }
    for (int i = b-1; i < n; i++)
    {
        B.insert(V[i]);
    }
    while (l--)
    {
        long long x = *prev(A.end());
        long long y = *(B.begin());
        A.erase(prev(A.end()));
        B.erase(B.begin());
        S.insert(y-x);
        S.insert(abs((x+y)/2));
        A.insert(*S.begin());
        S.erase(S.begin());
        B.insert(*prev(S.end()));
        S.erase(prev(S.end()));
    }
    for(auto i:A)
    {
        cout << i << " ";
    }
    for(auto i:S)
    {
        cout << i << " ";
    }
    for(auto i:B)
    {
        cout << i << " ";
    }
    return 0;
}