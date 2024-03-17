#include <bits/stdc++.h>
using namespace std;
main()
{
    vector<pair<int, int>> B;
    pair<int, int> d;
    int a, b, c, x;
    cin >> a >> b >> c;
    int A[a];
    memset(A, 0, sizeof(A));
    for (int i = 0; i < b; i++)
    {
        cin >> d.first >> d.second;
        d.first--;
        d.second--;
        B.push_back(d);
    }
    for (int i = 0; i < c; i++)
    {
        cin >> x;
        x--;
        for (int j = B[x].first; j <= B[x].second; j++)
        {
            A[j]++;
        }
    }
    for (int i = 0; i < a; i++)
    {
        cout << A[i] << "\n";
    }
}