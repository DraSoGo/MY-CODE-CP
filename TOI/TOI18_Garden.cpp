#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,q,x;
    cin >> n >> q;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < q; i++)
    {
        vector <int> R;
        vector <int> L;
        int chr = 0,chl = 0;
        cin >> x;
        for (int j = n-1; j > x; j--)
        {
            if (chr == 0 && A[j] < A[x])
            {
                R.push_back(A[j]);
                chr = 1;
            }
            else if(chr == 1)
            {
                if (A[j] > R.back())
                {
                    R.push_back(A[j]);
                }
                else
                {
                    R[lower_bound(R.begin(),R.end(),A[j])-R.begin()] = A[j];
                }
            }
        }
        for (int j = 0; j < x; j++)
        {
            if (chl == 0 && A[j] < A[x])
            {
                L.push_back(A[j]);
                chl = 1;
            }
            else if(chl == 1)
            {
                if (A[j] > L.back())
                {
                    L.push_back(A[j]);
                }
                else
                {
                    L[lower_bound(L.begin(),L.end(),A[j])-L.begin()] = A[j];
                }
            }
        }
        cout << min(L.size(),R.size()) << "\n";
    }
    return 0;
}