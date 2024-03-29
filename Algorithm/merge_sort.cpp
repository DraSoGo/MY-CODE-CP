#include <bits/stdc++.h>
using namespace std;

void msort(int A[], int s, int e)
{
    if (s != e)
    {
        int mid = (s + e) / 2, ls = mid - s + 1, rs = e - mid, il = 0, ir = 0, x = s;
        int l[ls], r[rs];
        msort(A, s, mid);
        msort(A, mid + 1, e);
        for (int i = s; i <= mid; i++)
        {
            l[i - s] = A[i];
        }
        for (int i = mid + 1; i <= e; i++)
        {
            r[i - mid - 1] = A[i];
        }
        while (il < ls && ir < ls)
        {
            if (l[il] < r[ir])
            {
                A[x] = l[il];
                il++;
            }
            else
            {
                A[x] = r[ir];
                ir++;
            }
            x++;
        }
        while (il < ls)
        {
            A[x] = l[il];
            il++;
            x++;
        }
        while (ir < rs)
        {
            A[x] = r[ir];
            ir++;
            x++;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    msort(A, 0, n - 1);
    for (int i = 0; i < 10; i++)
    {
        cout << A[i] << " ";
    }
    cout << "\n";
}