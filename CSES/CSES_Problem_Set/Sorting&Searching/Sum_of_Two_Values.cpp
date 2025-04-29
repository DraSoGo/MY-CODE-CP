#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,x,a;
    cin >> n >> x;
    vector <pair<int,int>> A;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        A.push_back({a,i+1});
    }
    sort(A.begin(),A.end());
    int l = 0,r = n-1;
    while (l < r)
    {
        int sum = A[l].first + A[r].first;
        if (sum == x)
        {
            cout << A[l].second << " " << A[r].second;
            return 0;
        }
        else if (sum < x)
        {
            l++;
        }
        else
        {
            r--;
        }
    }
    cout << "IMPOSSIBLE";
    return 0;
}