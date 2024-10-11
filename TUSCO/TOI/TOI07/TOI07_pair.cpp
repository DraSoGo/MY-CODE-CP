#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,a,b,sum = 0;
    cin >> n;
    vector <pair<int,int>> V;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        V.push_back({a,b});
    }
    sort(V.begin(),V.end(),greater <pair<int,int>> ());
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (V[i].first != V[j].first && V[i].second < V[j].second)
            {
                sum += V[i].first + V[j].first;
            }
        }
    }
    cout << sum;
    return 0;
}