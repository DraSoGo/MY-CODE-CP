#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int A[n];
    vector <int> V;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            V.push_back(A[i]);
            continue;
        }
        if (A[i] > V.back())
        {
            V.push_back(A[i]);
            continue;
        }
        if (A[i] < V.back())
        {
            V[lower_bound(V.begin(),V.end(),A[i])-V.begin()] = A[i];
        }
    }
    cout << V.size();
}