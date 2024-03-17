#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a,b,c,d;
	int n = 4,m = 2;
    float A[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }
    //cout << A[0][0] << " " << A[1][0] << " " << pow(A[0][0] - A[1][0],2);
    a = sqrt(pow(A[0][0] - A[1][0],2) + pow(A[0][1] - A[1][1],2));
    b = sqrt(pow(A[0][0] - A[3][0],2) + pow(A[0][1] - A[3][1],2));
    c = sqrt(pow(A[2][0] - A[1][0],2) + pow(A[2][1] - A[1][1],2));
    d = sqrt(pow(A[2][0] - A[3][0],2) + pow(A[2][1] - A[3][1],2));
    //cout << a << " " << b << " " << c << " " << d;
    float mx = max(a,max(b,max(c,d)));
    cout << fixed << setprecision(2) << mx;
}