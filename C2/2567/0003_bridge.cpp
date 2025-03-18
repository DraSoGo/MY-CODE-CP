#include <bits/stdc++.h>
using namespace std;

long long co;

template <typename T>
void merge(vector <T> &V,long long start,long long mid,long long stop,vector <T> &tmp)
{
    long long bi = start;
    long long ci = mid+1;
    for (long long i = start; i <= stop; i++)
    {
        if (ci > stop)
        {
            tmp[i] = V[bi++];
            continue;
        }
        if (bi > mid)
        {
            tmp[i] = V[ci++];
            continue;
        }
        if (V[bi] < V[ci])
        {
            tmp[i] = V[bi++];
        }
        else
        {
            tmp[i] = V[ci++];
            co += mid + 1 - bi;
        }
    }
    for (long long i = start; i <= stop; i++)
    {
        V[i] = tmp[i];
    }
}

template <typename T>
void msort(vector <T> &V,long long start,long long stop,vector <T> &tmp)
{
    if (start < stop)
    {
        long long mid = (start+stop)/2;
        msort(V,start,mid,tmp);
        msort(V,mid+1,stop,tmp);
        merge(V,start,mid,stop,tmp);
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,x;
    vector <long long> V,tmp;
    cin >> n;
    for (long long i = 0; i < n; i++)
    {
        cin >> x;
        V.push_back(x);
        tmp.push_back(x);
    }
    msort(V,0,n-1,tmp);
    // for (long long i = 0; i < n; i++)
    // {
    //     cout << V[i] << " ";
    // }
    cout << co;
    return 0;
}