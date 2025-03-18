#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int a,ch = 0,x = 0,co = 0,j = 0;
    cin >> a;
    int A[a],B[a];
    for (int i = 0; i < a; i++)
    {
        cin >> A[i];
        B[i] = A[i];
    }
    sort(B,B+a);
    while (ch == 0)
    {
        for (int i = 0; i < a; i++)
        {
            if (A[i] != B[i])
            {
                ch = 0;
                break;
            }
            else
            {
                ch = 1;
            }
        }
        if (ch == 1)
        {
            break;
        }
        for (int i = 0; i < a; i++)
        {
            if (B[i] != A[i])
            {
                x = A[i];
                j = i;
                break;
            }
        }
        for (int i = j; i < a; i++)
        {
            if (x > A[i])
            {
                co++;
                A[i - 1] = A[i];
                A[i] = x;
            }
            else if (x < A[i])
            {
                break;
            }
        }
    }
    cout << co;
    return 0;
}