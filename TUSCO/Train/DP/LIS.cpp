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
        int idx = lower_bound(V.begin(),V.end(),A[i])-V.begin();
        if (idx >= V.size())
        {
            V.push_back(A[i]);
        }
        else
        {
            V[idx] = A[i];
        }
    }
    cout << V.size();
}
/*
INPUT
10
1 3 4 2 1 7 8 9 2 0
OUTPUT
6
*/