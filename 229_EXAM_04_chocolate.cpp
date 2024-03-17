#include<bits/stdc++.h>
using namespace std;
int c = 0;
void sol (int N[],int n,int m,int k,int sum)
{
    if(c != 0)
    {
        return;
    }
    if(sum > k || m + 1 == n)
    {
        return;
    }
    else if(sum == k)
    {
        c = 1;
        return;
    }
    else
    {
        sum = sum + N[m+1];
        sol(N,n,m+1,k,sum);
        sum = sum - N[m+1];
        sol(N,n,m+1,k,sum);
    }
}
int main ()
{
    int m;
    cin >> m;
    while(m--)
    {
        int n,sum = 0;
        c = 0;
        cin>>n;
        int N[n];
        for(int i=0;i<n;i++)
        {
            cin >> N[i];
            sum += N[i];
        }
        if(sum%2 != 0)
        {
            cout<<"NO\n";
        }
        else
        {
            sol(N,n,-1,sum/2,0);
            if(c > 0)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
    }
}