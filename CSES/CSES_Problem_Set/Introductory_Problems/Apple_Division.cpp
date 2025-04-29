#include <bits/stdc++.h>
using namespace std;

vector <int> V;
long long n,sum,sumA,sumB,ans = INT_MAX;
long long A[21];

void gen()
{
    if (V.size() == n)
    {
        sumA = 0;
        for (int i = 0; i < V.size(); i++)
        {
            sumA += A[i] * V[i];
        }
        sumB = sum - sumA;
        ans = min(ans,abs(sumA-sumB));
        return;
    }
    V.push_back(1);
    gen();
    V.pop_back();
    V.push_back(0);
    gen();
    V.pop_back();
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        sum += A[i];
    }
    gen();
    cout << ans;
    return 0;
}
