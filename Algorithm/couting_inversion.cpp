/*
Task: Bridge
merge sort sovle inversion
*/

#include <bits/stdc++.h>
using namespace std;

int co = 0;

template <typename T>
void merge(vector <T> &V,int start,int mid,int stop,vector <T> &tmp)
{
    int bi = start;
    int ci = mid+1;
    for (int i = start; i <= stop; i++)
    {
        if (bi > mid)
        {
            tmp[i] = V[ci++];
            continue;
        }
        if (ci > stop)
        {
            tmp[i] = V[bi++];
            continue;
        }
        if (V[bi] < V[ci])
        {
            tmp[i] = V[bi++];
        }
        else
        {
            tmp[i] = V[ci++];
            co += mid - bi + 1;
        }
    }
    for (int i = start; i <= stop; i++)
    {
        V[i] = tmp[i];
    }
}

template <typename T>
void msort(vector <T> &V,int start,int stop,vector <T> &tmp)
{
    if (start < stop)
    {
        int mid = (start+stop)/2;
        msort(V,start,mid,tmp);
        msort(V,mid+1,stop,tmp);
        merge(V,start,mid,stop,tmp);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,x;
    vector <int> V,tmp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        V.push_back(x);
        tmp.push_back(x);
    }
    msort(V,0,n-1,tmp);
    cout << co;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << V[i] << " ";
    // }
    // cout << "\n" << co;
    return 0;
}