#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long m,n;
    cin >> n >> m;
    long long num[n],A[m];
    bool ch[m];
    string B[m],c;
    memset(A,0,sizeof(A));
    memset(ch,0,sizeof(A));
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> c;
        B[i] = c;
    }
    sort(B,B+m);
    int k = 0;
    for (int i = 0; i < m; i++)
    {
        //cout << B[i] << "\n";
        A[k]++;
        for (int j = i+1; j < m; j++)
        {
            if (B[i] == B[j])
            {
                A[k]++;
            }
            else
            {
                i = j-1;
                k++;
                break;
            }
        }
    }
    sort(num,num+n);
    sort(A,A+m,greater <long long>());
    long long mn = 0,mx = 0;
    // for (long long i = 0; i < n; i++)
    // {
    //     cout << num[i] << " ";
    // }
    // cout << "\n";
    // for (long long i = 0; i < m; i++)
    // {
    //     cout << A[i] << " ";
    // }
    // cout << "\n";
    for (long long i = 0; i < m; i++)
    {
        if (A[i] == 0)
        {
            break;
        }
        mn += A[i]*num[i];
        //cout << mn << "\n";
    }
    long long j = 0;
    for (long long i = n-1; i >= 0; i--)
    {
        if (A[j] == 0)
        {
            break;
        }
        mx += A[j]*num[i];
        j++;
        if (j == m)
        {
            break;
        }
        
    }
    cout << mn << " " << mx;
}