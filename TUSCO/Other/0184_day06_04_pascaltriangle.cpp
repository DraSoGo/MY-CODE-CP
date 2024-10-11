#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	cin >> a;
	int A[a][2*a+1];
	memset(A, 0, sizeof(A));
	A[0][a+1] = 1;
	for(int i = 1;i < a;i++)
	{
		for(int j = 1;j <= 2*a;j++)
		{
			A[i][j] = A[i-1][j-1] + A[i-1][j+1];
		}
	}
	for(int i = 0;i < a;i++)
	{
		for(int j = 2;j <= 2*a;j++)
		{
			if(A[i][j] == 0)
			{
				cout << " ";
			}
			else
			{
				cout << A[i][j];
			}
		}
		cout << "\n";
	}
}