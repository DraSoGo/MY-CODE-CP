#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n,x;
        cin >> n;
        vector <int> A;
        while (n--)
        {
            cin >> x;
            if (A.empty())
            {
                A.push_back(x);
            }
            else if (x > A.back())
            {
                A.push_back(x);
            }
            else
            {
                A[lower_bound(A.begin(),A.end(),x)-A.begin()] = x;
            }
        }
        cout << A.size() << "\n";
    }
    return 0;
}