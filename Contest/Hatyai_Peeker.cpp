#include <bits/stdc++.h>
using namespace std;
int cmp(pair <long long,long long> a,pair <long long,long long> b)
{
    return a.first + a.second < b.first + b.second;
}
int main()
{
    long long V,x,y,z,T,ans = 999999,L;
    cin >> V >> T >> L;
    pair <long long,long long> A[V];
    for (long long i = 0; i < V; i++)
    {
        cin >> x >> y;
        A[i].first = x;
        A[i].second = y;
    }
    sort(A,A+V,cmp);
    for (long long i = 0; i < V-1; i++)
    {
        z = abs(A[i].first - A[i+1].first) + abs(A[i].second - A[i+1].second);
        ans = min(ans,z);
    }
   cout << ans << "\n";
   if (ans * T <= L)
   {
        cout << "YES TIME = " << ans * T;
   }
   else
   {
        cout << "NO TIME = " << ans * T;
   }
   
   return 0;
}