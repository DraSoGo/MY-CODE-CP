#include <bits/stdc++.h>
using namespace std;


int main() 
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,sum = 0,x = 0,ans = 0;
    stack <pair<long long,long long>> st;
    char s;
    cin >> n;
    for (long long i = 0; i < n; i++)
    {
        cin >> s;
        if (s == 'F')
        {
            x = 0;
        }
        else
        {
            x++;
            while (!st.empty() && st.top().first < x)
            {
                st.pop();
            }
            if (st.empty())
            {
                sum += i+1;
            }
            else
            {
                sum += i - st.top().second + x - 1;
            }
            st.push({x,i});
        }
        ans += sum;
    }
    cout << ans;
    return 0;   
}