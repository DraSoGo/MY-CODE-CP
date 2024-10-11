#include <bits/stdc++.h>
using namespace std;

int A[100005];
vector <int> V;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (A[i] > A[i-1] && A[i] > A[i+1])
        {
            V.push_back(i);
        }
    }
    cout << V.size() << "\n";
    for (int i = 0; i < V.size(); i++)
    {
        cout << V[i] << " ";
    }
    
    return 0;
}