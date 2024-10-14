#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,x,k,y;
    cin >> n >> k;
    int A[n],B[k];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < k; i++)
    {
        cin >> B[i];
    }
    int sum;
    for (int i = 0; i <= n-k; i++)
    {
        bool c = 1;
        for (int j = 0; j < k; j++)
        {
            if (j == 0)
            {
                sum = abs(A[i] - B[j]);
                continue;
            }
            if (abs(A[i+j] - B[j]) != sum)
            {
                c = 0;
                break;
            }
        }
        if (c)
        {
            cout << i+1;
            break;
        }
    }
    return 0;
}