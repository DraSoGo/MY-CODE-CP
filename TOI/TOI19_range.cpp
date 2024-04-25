#include <bits/stdc++.h>
using namespace std;

struct point
{
    int idx,x1,x2;
    bool operator < (const point & b)const
    {
        if (x2 == b.x2)
        {
            return x1 > b.x1;
        }
        return x2 < b.x2;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    point A[n];
    int ANS[n];
    vector <int> LIS;
    for (int i = 0; i < n; i++)
    {
        A[i].idx = i;
        cin >> A[i].x1 >> A[i].x2;
    }
    sort(A,A+n);
    for (int i = 0; i < n; i++)
    {
        int idx = upper_bound(LIS.begin(),LIS.end(),-A[i].x1)-LIS.begin();
        if (idx >= LIS.size())
        {
            LIS.push_back(-A[i].x1);
            ANS[A[i].idx] = LIS.size();
        }
        else
        {
            LIS[idx] = -A[i].x1;
            ANS[A[i].idx] = idx+1;
        }
    }
    cout << LIS.size() << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << ANS[i] << " ";
    }
    return 0;
}