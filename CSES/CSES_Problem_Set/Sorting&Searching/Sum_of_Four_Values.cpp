#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,w,sum;
    cin >> n >> w;
    pair <int,int> A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i].first;
        A[i].second = i+1;
    }
    sort(A,A+n);
    for (int i = 0; i < n-3; i++)
    {
        for (int j = i+1; j < n-2; j++)
        {
            int k = j+1,l = n-1;
            while (k < l)
            {
                sum = A[i].first+A[j].first+A[k].first+A[l].first;
                if (sum == w)
                {
                    cout << A[i].second << " " << A[j].second << " " << A[k].second << " " << A[l].second;
                    return 0;
                }
                if (sum > w)
                {
                    l--;
                }
                else
                {
                    k++;
                }
            }
        }
    }
    cout << "IMPOSSIBLE";
    return 0;
}
