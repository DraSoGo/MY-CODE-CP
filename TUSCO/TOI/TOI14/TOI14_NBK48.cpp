#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x,y,c;
    cin >> n >> k;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (i == 0)
        {
            A[i] = x;
        }
        else
        {
            A[i] = x + A[i-1];
        }
    }
    int mn = 2000000000;
	for(int i = n-1;i >= 0;i--)
    {
        mn = min(mn,A[i]);
        A[i] = min(mn,A[i]);
	}
    for (int i = 0; i < k; i++)
    {
        int ch = 0;
        cin >> y;
        cout << upper_bound(A,A+n,y) - A << "\n";
    }
}