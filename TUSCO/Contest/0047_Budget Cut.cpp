#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,x,co = 0,m = 1e9 + 7;
    vector <int> A;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (!A.empty())
        {
            sort(A.begin(),A.end(),greater <int>());
            for(auto j:A)
            {
                if (j >= x)
                {
                    co = (co+1)%m;
                }
                else
                {
                    break;
                }
                
            }
            A.push_back(x);
        }
        else
        {
            A.push_back(x);
        }
    }
    cout << co;
    return 0;
}