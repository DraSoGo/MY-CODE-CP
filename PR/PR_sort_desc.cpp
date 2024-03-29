#include <bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin >> n;
    int N[n];
    for (int i = 0; i < n; i++)
    {
        cin >> N[i];
    }
    sort(N,N+n,greater<int>());
    for (int i = 0; i < n; i++)
    {
        cout << N[i] << " ";
    }
}