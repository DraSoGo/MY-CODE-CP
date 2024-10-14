#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,k,x;
    cin >> n >> k;
    int A[n];
    deque <int> DQ;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < k; i++)
    {
        while (!DQ.empty() && A[i] <= A[DQ.back()])
        {
            DQ.pop_back();
        }
        DQ.push_back(i);
    }
    cout << A[DQ.front()] << " ";
    // cout << "\n";
    for (int i = k; i < n; i++)
    {
        while (!DQ.empty() && DQ.front() <= i - k)
        {
            DQ.pop_front();
        }
        if (A[i] > A[DQ.back()])
        {
        }
        else
        {
            // cout << i << "\n";
            while (!DQ.empty())
            {
                if (A[DQ.back()] < A[i])
                {
                    break;
                }
                DQ.pop_back();
            }
        }
        DQ.push_back(i);
        cout << A[DQ.front()] << " ";
    }
    return 0;
}