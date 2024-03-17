#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,b,c = 0;
    cin >> a;
    int A[a];
    for (int i = 0; i < a; i++)
    {
        cin >> A[i];
    }
    int sumx = 0,mn = 10001;
    for (int i = 0; i < a; i++)
    {
        mn = min(mn,A[i]);
        sumx = max(sumx,A[i] - mn);
    }
    cout << sumx;
}