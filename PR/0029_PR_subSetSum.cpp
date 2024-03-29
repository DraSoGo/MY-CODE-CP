#include <bits/stdc++.h>
using namespace std;
vector <int> zo;
int n,k,ch = 0;
void solve (int N[],int m,int sum)
{
    if(sum > k)
    {
        return;
    }
    if(m == n)
    {
        if (sum == k)
        {
            ch++;
        }
    }
    else
    {
        zo.push_back(0);
        solve(N,m+1,sum);
        sum -= zo[zo.size() - 1]*N[m];
        zo.pop_back();
        zo.push_back(1);
        solve(N,m+1,sum+zo[m]*N[m]);
        sum -= zo[zo.size() - 1]*N[m];
        zo.pop_back();
    }
}
int main()
{
    cin >> n;
    int N[n];
    for (int i = 0; i < n; i++)
    {
        cin >> N[i];
    }
    cin >> k;
    solve(N,0,0);
    cout << ch;
}
