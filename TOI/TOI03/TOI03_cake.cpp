#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    double A[n][5];
    double B[5] = {1,0.75,0.5,0.25,0.125};
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> A[i][j];
            sum += A[i][j] * B[j];
        }
    }
    cout << ceil(sum);
    return 0;
}