#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,n = 2,m = 2;
    int A[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << (A[0][0]*A[1][1])- (A[0][1]*A[1][0]);
}