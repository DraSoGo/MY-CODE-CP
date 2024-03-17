#include <bits/stdc++.h>
using namespace std;

int a,co = 0;

void bcouter (int m,int n,int A[],int sum)
{
    if (sum > a)
    {
        return; 
    }
    if (m == n)
    {
        if (sum == a)
        {
            co++;
            return;
        }
    }
    else
    {
        bcouter(m+1,n,A,sum + A[m]);
        bcouter(m+1,n,A,sum);
    }
}
int main()
{
    int n,b;
    int A[n];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cin >> a;
    bcouter(0,n,A,0);   
    cout << co;
}