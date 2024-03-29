#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,x1,y1,mx;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> y >> x;
        int A[y][x];
        mx = INT_MIN;
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < x; k++)
            {
                cin >> A[j][k];
            }
        }
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < x; k++)
            {
                //cout << A[j][k] << " " << A[j+1][k] << " " << A[j][k+1] << " " << mx << " " << j+1 << " " << k+1 << "\n";
                if (abs(A[j][k] - A[j+1][k]) <= 10 && (A[j][k] + A[j+1][k]) > mx && A[j][k] != 0 && j != y-1)
                {
                    mx = A[j][k] + A[j+1][k];
                    y1 = j+1,x1 = k+1;
                }
                if (abs(A[j][k] - A[j][k+1]) <= 10 && (A[j][k] + A[j][k+1]) > mx && A[j][k] != 0 && k != x-1)
                {
                    mx = A[j][k] + A[j][k+1];
                    y1 = j+1,x1 = k+1;
                }
            }
        }
        cout << y1 << " " << x1 << "\n";
    }
    
}