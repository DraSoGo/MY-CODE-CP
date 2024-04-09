#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a,b,ch,sum;
    cin >> a >> b;
    int A[b];
    for (int i = 0; i < b; i++)
    {
        cin >> A[i];
    }
    int l = 0,r = INT_MAX;
    while (l < r)
    {
        int mid = (l+r)/2;
        // cout << l << " " << r << " " << mid << "\n";
        ch = 0;sum = 0;
        for (int i = 0; i < b; i++)
        {
            if (A[i] > mid)
            {
                ch = a;
                break;
            }
            sum += A[i];
            if (sum > mid)
            {
                ch++;
                sum = A[i];
            }
        }
        if (ch >= a)
        {
            l = mid+1;
        }
        else
        {
            r = mid;
        }
    }
    cout << r;
    return 0;
}