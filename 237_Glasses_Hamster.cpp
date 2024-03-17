#include <bits/stdc++.h>
using namespace std;
vector <int> zo;
int n,k,ch = 0;
void solve (int N[],int m,int sum)
{
    if(m == n)
    {
        if (sum % k == 0 && sum != 0)
        {
            ch = 1;
        }
    }
    else
    {
        zo.push_back(-1);
        solve(N,m+1,sum+zo[m]*N[m]);
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
    int a,b;
    cin >> a;
    int N[10000];
    for (int j = 0; j < a; j++)
    {
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> N[i];
        }
        solve(N,0,0);
        if (ch == 1)
        {
            cout << "Y" << "\n";
        }
        else
        {
            cout << "N" << "\n";
        }
        ch = 0;
    }
}
