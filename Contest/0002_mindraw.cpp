#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,x,sum = 0;
    cin >> n;
    priority_queue <long long,vector <long long>,greater <long long>> PQ;
    for (long long i = 0; i < n; i++)
    {
        cin >> x;
        if (x == 0)
        {
            if (!PQ.empty())
            {
                sum += PQ.top();
                PQ.pop();
            }
            continue;
        }
        PQ.push(x);
    }
    cout << sum;
    return 0;
}