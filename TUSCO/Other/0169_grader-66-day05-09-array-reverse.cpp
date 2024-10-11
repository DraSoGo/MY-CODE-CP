#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a;
    cin >> n;
    string A[n];
    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = n-1; i >= 0; i--)
    {
        cout << A[i] << " ";
    }
    
}