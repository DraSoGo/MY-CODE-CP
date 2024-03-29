#include <bits/stdc++.h>
using namespace std;
bool cmp(const pair<long long,long long> &a,const pair<long long,long long> &b)
{
    return a.second > b.second;
}

int main() 
{
    long long dl = 0,sum = 0,n,A[10000],ch;
    memset(A,0,sizeof(A));
    cin >> n;
    pair <long long,long long> w[n];
    for (int i = 0; i < n; i++)
    {
        cin >> w[i].first >> w[i].second;
    }
    sort(w,w + n,cmp);
    // cout << "------\n";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << w[i].first << " " << w[i].second << "\n";
    // }
    // cout << "------\n";
    for (int i = 0; i < n; i++)
    {
        ch = 0;
        for (int j = w[i].first; j >= 1; j--)
        {
            if (A[j] == 0)
            {
                A[j] = 1;
                ch = 1;
                break;
            }
        }
        // for (int k = 0; k < 10; k++)
        // {
        //     cout << A[i] << " ";
        // }
        // cout << "\n------\n";
        if (ch == 1)
        {
            sum = sum + w[i].second;
            // cout << w[i].first << " " << w[i].second << "\n";
        }
    }
    cout << sum;
}