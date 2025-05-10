#include "inversion_count.h"
// #include <bits/stdc++.h>
using namespace std;

const int sz = 1e5;
int tree[sz],mxn,n;

void add(int idx,int x)
{
    idx += mxn;
    tree[idx] = tree[idx]+x;
    for (int i = idx/2; i >= 1; i/=2)
    {
        tree[i] = tree[2*i]+tree[2*i+1];
    }
}

int qury(int a,int b)
{
    int sum = 0;
    a += mxn;
    b += mxn;
    while (a <= b)
    {
        if (a % 2 == 1)
        {
            sum += tree[a];
            a++;
        }
        if (b % 2 == 0)
        {
            sum += tree[b];
            b--;
        }
        a /= 2;
        b /= 2;
    }
    return sum;
}

long long count_inversions(vector<int>& arr)
{
    mxn = 0;
    for (auto x:arr)
    {
        mxn = max(mxn,x);
    }
    for (int i = 0; i < 2*mxn+1; i++)
    {
        tree[i] = 0;
    }
    
    int ans = 0;
    for (auto x:arr)
    {
        add(x,1);
        ans += qury(x+1,mxn);
    }
    return ans ;
}

// int main()
// {
//     ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//     cin >> n;
//     int x;
//     vector <int> V;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> x;
//         mxn = max(x,mxn);
//         V.push_back(x);
//     }
//     cout << count_inversions(V);
//     return 0;
// }