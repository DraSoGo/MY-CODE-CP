#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int A[n+1],co = 1,mxco = 0;
    A[n] = -1;
    for (int i = 0; i < n; ++i)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        int c = A[i+1];
        if (A[i] > c)
        {
            mxco = max(mxco,co);
            co = 1;
            continue;
        }
        co++;
        c = A[i];
    }
    mxco = max(mxco,co);
    cout << mxco;   
    return 0;
}
