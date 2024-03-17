#include <bits/stdc++.h>
using namespace std;
long long n,a,b,mx = 0,ans = 0;
vector <long long> A[1000000];
vector <long long> ANS;
queue <long long> Q;

void BFS()
{
    long long u,sum;
    Q.push(1);
    while (!Q.empty())
    {
        sum = 0;
        u = Q.front();
        //cout << u << "\n";
        Q.pop();
        for (long long i = 0; i < A[u].size(); i++)
        {
            Q.push(A[u][i]);
            if (A[A[u][i]].empty())
            {
                if (A[u][i] > n)
                {
                    sum += A[u][i];
                }
            }
        }
        if(sum != 0)
        {
            ANS.push_back(sum);
        }
    }
    
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for (long long i = 1; i < n+1; i++)
    {
        cin >> a >> b;
        A[i].push_back(a);
        A[i].push_back(b);
    }
    BFS();
    for (long long i = 0; i < ANS.size(); i++)
    {
        mx = max(ANS[i],mx);
    }
    for (long long i = 0; i < ANS.size(); i++)
    {
        ans += mx-ANS[i];
    }
    cout << ans;
    return 0;
}
