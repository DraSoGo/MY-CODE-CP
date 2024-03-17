#include<bits/stdc++.h>
using namespace std;
int memo[1000000];
int ans = 1e9;
int change(int i,int j,int B[])
{
    if (i == 0)
    {
        return 0;
    }
    if (i < 0)
    {
        return 1e9;
    }
    if (memo[i] != -1)
    {
        return memo[i];
    }
    for (int k = 0; k < j; k++)
    {
        ans = min(ans,change(i - B[k],j,B));
    }
    ans = ans + 1;
    memo[i] = ans;
    return ans;
}
int main()
{
    memset(memo,-1,sizeof(memo));
    int a,b,c;
    cin >> a >> b;
    int B[b];
    for (int i = 0; i < b; i++)
    {
        cin >> B[i];
    }
    change(a,b,B);
    cout << ans;
}