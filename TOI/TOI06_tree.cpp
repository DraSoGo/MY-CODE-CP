#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int x,y,n;
    for (int i = 0; i < 5; i++)
    {
        cin >> n;
        vector <pair<int,int>> A,B;
        for (int i = 0; i < n-1; i++)
        {
            cin >> x >> y;
            A.push_back({min(x,y),max(x,y)});
        }
        for (int i = 0; i < n-1; i++)
        {
            cin >> x >> y;
            B.push_back({min(x,y),max(x,y)});
        }
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        bool ch = 1;
        for (int i = 0; i < n-1; i++)
        {
            if (A[i].first != B[i].first || A[i].second != B[i].second)
            {
                ch = 0;
            }
        }
        if (ch)
        {
            cout << 'Y';
        }
        else
        {
            cout << 'N';
        }
    }
    
    return 0;
}