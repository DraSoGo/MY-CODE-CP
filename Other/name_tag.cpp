#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,A[26];
    char x[50];
    cin >> n;
    memset(A,0,sizeof(A));
    for (int i = 0; i <= n; i++)
    {
        gets(x);
        for (int j = 0; j < strlen(x); j++)
        {
            A[x[j] - 'A']++;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        cout << char(65+i) << "=" << A[i] << "\n";
    }
}