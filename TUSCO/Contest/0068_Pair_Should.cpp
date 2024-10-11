#include <bits/stdc++.h>
using namespace std;

int k,co = 0;
vector <int> V;

void bi(int m,int n,int A[])
{
    if (m == n)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += V[i]*A[i];
        }
        if (sum == k)
        {
            co++;
        }
    }
    else
    {
        V.push_back(-1);
        bi(m+1,n,A);
        V.pop_back();
        V.push_back(1);
        bi(m+1,n,A);
        V.pop_back();
    }
    
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n >> k;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    bi(0,n,A);
    cout << co;
    return 0;
}