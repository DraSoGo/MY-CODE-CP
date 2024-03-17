#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    int ch = 0;
    vector<long long> w1(n);
    vector<long long> w2(n);
    vector<long long> sum(n);
    for (int i = 0; i < n; i++)
    {
        cin >> w1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> w2[i];
    }
    sort(w1.begin(),w1.end());
    sort(w2.begin(),w2.end(),greater<long long>());
    for (int i = 0; i < n; i++)
    {
        sum[i] = w1[i] + w2[i];
    }
    sort(sum.begin(),sum.end());
    for (int i = 0; i < n-1; i++)
    {
        ch = ch + (sum[i+1] - sum[i]);
    }
    cout << ch;

    
}
