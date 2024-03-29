#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b,A[480],ch = 0;
	memset(A,0,sizeof(A));
	cin >> n;
	for(int i = 0;i < n;i++)
	{
		cin >> a >> b;
		for (int j = a; j <= b; j++)
        {
            A[j]++;
        }
        
	}
	for(int i = 0;i < 480;i++)
	{
		if (A[i] == 0)
        {
            ch++;
        }
	}
    cout << ch;
}