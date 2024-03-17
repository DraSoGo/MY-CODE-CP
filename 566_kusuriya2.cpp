#include <bits/stdc++.h>
using namespace std;
string st;
vector<long long> sw, sn;
long long mn = INT_MAX,co = 0;

void B(long long a)
{
    if(st.length() == a)
    {
        if (co == 0)
        {
            co = 1;
        }
        else
        {
            long long sumsw = 1;
            long long sumsn = 0;
            for (int i = 0; i < st.length(); i++)
            {
                if (st[i] == '1')
                {
                    sumsw *= sw[i];
                    sumsn += sn[i];
                }
            }
            mn = min(mn,abs(sumsw - sumsn));     
        }
    }
    else
    {
        st += '0';
        B(a);
        st.erase(st.length()-1,1);
        st += '1';
        B(a);
        st.erase(st.length()-1,1);
    }
}
int main()
{
    long long N,x,y;
    cin >> N;

    for (long long i = 0; i < N; ++i)
    {
        cin >> x >> y;
        sw.push_back(x);
        sn.push_back(y);
    }
    B(N);
    cout << ((mn*mn*(mn+1)*(mn+1))/4) - ((mn*(mn+1)*((2*mn)+1))/6) + ((mn*(mn+1))/2) << "\n";
    return 0;
}