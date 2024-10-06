#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int A[n],co,mxco = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        co = 0;
        for (int j = i; j < n-1; j++)
        {
            if (A[j+1] <= A[j])
            {
                break;
            }
            co++;
        }
        mxco = max(mxco,co);
    }
    cout << mxco+1;
    return 0;
}
