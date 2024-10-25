#include <bits/stdc++.h>
using namespace std;

const int sz = 1e6+1;
int A[sz];

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        if (A[i] < A[i+1])
        {
            cout << A[i] << " ";
        }
        else
        {
            int idx = i+1,idxmx = i+1;
            while (idx < n)
            {
                if (A[idx] > A[idxmx])
                {
                    idxmx = idx;
                }
                if (A[idxmx] > A[i])
                {
                    break;
                }
                idx++;
            }
            for (int j = i; j < idxmx; j++)
            {
                cout << min(A[i],A[idxmx]) << " ";
            }
            i = idxmx-1;
        }
        
    }
    return 0;
}