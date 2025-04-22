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
    for (int i = 0; i < n-2; i++)
    {
        int j = i+1,k = n-1;
        while (j < k)
        {
            sum = A[i].first + A[j].first + A[k].first;
            if (sum == w)
            {
                cout << A[i].second << " " << A[j].second << " " << A[k].second;
                return 0;
            }
            if (sum > w)
            {
                k--;
            }
            else
            {
                j++;
            }
        }
    }
    cout << "IMPOSSIBLE";
    return 0;
}
