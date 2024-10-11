#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b,ch = 0;
	cin >> n;
    int A[n][2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }
}