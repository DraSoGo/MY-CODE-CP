#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int A[3] = {1,3,4},DP[50];
    int n;
    DP[0] = 0;
    for (int i = 1; i < 50; i++)
    {
        DP[i] = 0;
        for (int j = 0; j < 3; j++)
        {
            if (i-A[j] < 0)
            {
                break;
            }
            DP[i] += 1+DP[i-A[j]];
        }
    }
    for (int i = 0; i < 50; i++)
    {
        cout << DP[i] << " ";
    }
    cout << "\n";
    cin >> n;
    cout << DP[n-1];
    return 0;
}