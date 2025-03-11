#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,co = 0,sum = 0;
    pair <int,int> x;
    vector <pair <int,int>> A;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x.second >> x.first;
        A.push_back(x);
    }
    sort(A.begin(),A.end(),greater <pair<int,int>>());
    for (int i = 0; i < n; i++)
    {
        if (A[i].second >= co)
        {
            sum += A[i].first;
            cout << A[i].second << " " << A[i].first << "\n";
            co++;
        }
    }
    cout << co << " " << sum;
}