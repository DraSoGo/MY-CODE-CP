#include <bits/stdc++.h>
using namespace std;

long long Hpat(string &pat)
{
    long long hpat = 0;
    for (int i = 0; i < pat.length(); i++)
    {
        hpat |= (pat[i]-'0');
        hpat <<= 1;
    }
    hpat >>= 1;
    return hpat;
}

bool rapi(string &pat,string &str,long long &hpat)
{
    long long hstr = 0,m = 1;
    m <<= pat.length()-1;
    if (str.length() < pat.length())
    {
        return false;   
    }
    for (long long i = 0; i < pat.length(); i++)
    {
        hstr |= (str[i]-'0');
        hstr <<= 1;
    } hstr >>= 1;
    if (hstr == hpat)
    {
        return true;
    }
    for (long long i = 1; i <= str.length()-pat.length(); i++)
    {
        hstr -= m*(str[i-1]-'0');
        hstr <<= 1;
        hstr |= (str[i+pat.length()-1]-'0');
        if (hstr == hpat)
        {
            return true;
        }
    }
    return false;
    
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long m,n,t,lens;
    cin >> m >> n;
    long long hpat[m];
    string CAT[m];
    for (long long i = 0; i < m; i++)
    {
        cin >> CAT[i];
        hpat[i] = Hpat(CAT[i]);
    }
    cin >> t;
    while (t--)
    {
        long long ch = 0;
        cin >> lens;
        string s;
        cin >> s;
        for (long long i = 0; i < m; i++)
        {
            if(rapi(CAT[i],s,hpat[i]))
            {
                cout << i+1 << " ";
                ch = 1;
            }
        }
        if (ch == 0)
        {
            cout << "OK";
        }
        cout << "\n";
    }
    
    return 0;
}