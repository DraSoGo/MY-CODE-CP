#include <bits/stdc++.h>
using namespace std;
bool vis[100001];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n, m,idx = 0,ch = 0;
    double sum = 0,a,b,c,mean;
    cin >> n >> a;
    memset(vis,1,sizeof(vis));
    m = n;
    double A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    while (m > 0)
    {
        mean = a/m;
        if (mean > A[idx] && vis[idx])
        {
            vis[idx] = 0;
            ch = 1;
            a -= A[idx];
            m--;
        }
        idx++;
        if (idx >= n)
        {
            idx = 0;
            if (ch == 0)
            {
                break;
            }
        }
        cout << a << " :" << A[idx] << " " << mean << "\n";
    }
    for (int i = 0; i < n; i++)
    {
        if (mean > A[i])
        {
            cout << fixed << setprecision(0) << A[i] << '\n';
        }
        else
        {
            b = a / m;
            if (floor(b) * 1000 != b * 1000)
            {
                cout << fixed << setprecision(2) << a / m << '\n';
            }
            else
            {
                cout << fixed << setprecision(0) << a / m << '\n';
            }
        }
    }

    return 0;
}
