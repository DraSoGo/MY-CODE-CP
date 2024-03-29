#include <bits/stdc++.h>
using namespace std;

long long cal(long long n)
{
    long long x = n/10;
    n += x;
    while (x > 0)
    {
        x/=10;
        n+=x;
    }
    return n;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,x,y,k,s,e,mid;
    cin >> n;
    while (n--)
    {
        cin >> x;
        s = 0;e = x;
        while (s <= e)
        {
            mid = (s+e)/2;
            //cout << mid << " " << cal(mid) << "\n";
            if (cal(mid) >= x)
            {
                e = mid-1;
            }
            else
            {
                s = mid+1;
            }
        }
        cout << s << " ";
        //cout << cal(s) << " ";
        //cout << "\n";
        
    }
    
    return 0;
}