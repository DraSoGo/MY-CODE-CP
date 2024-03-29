#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,mx = INT_MIN,x;
    cin >> a >> n;
    int A[a];
    memset(A,0,sizeof(A));    
    for (int i = 0; i < n; i++)
    {
        cin >> b;
        A[b-1]++;
    }
    for (int i = 0; i < a; i++)
    {
        if (A[i] > mx)
        {
            mx = A[i];
            x = i+1;
        }
    }
    cout << x << "\n" << mx;
}