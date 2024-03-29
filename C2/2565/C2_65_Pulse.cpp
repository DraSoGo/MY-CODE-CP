#include<bits/stdc++.h>
using namespace std;
long long A(int n)
{
    if(n == 1)
    {
        return 1;
    }
    return A(n-1)*n;
}
long long B(int n,int k)
{
    long long cnt = 1;
    for(int i = n;i > n-k;i--)
    {
        cnt*=i;
    }
    return cnt/A(k);
}
int main()
{
    int n,k;
    cin >> n >> k;
    long long sum=0;
    for(int i = 1;i <= k;i++)
    {
        sum = sum + B(n-i+1,i);
    }
    cout << sum+1;
    return 0;
}