#include <bits/stdc++.h>
using namespace std;

long long X[1000];

bool rapi(string str,string pat)
{
    int x = pat.length(),y = str.length(),c = x-1,calpat = 0,calstr = 0;
    for (int i = 0; i < x; i++)
    {
        calpat += (pat[i]-'a')*X[c];
        calstr += (str[i]-'a')*X[c];
        //cout << c << " " << X[c] << "\n";
        c--;
        if (c == -1)
        {
            c = x-1;
        }
    }
    if (calstr == calpat)
    {
        cout << 0 << "\n";
        return true;
    }
    for (int i = 1; i <= y-x; i++)
    {
        calstr -= (str[i-1]-'a')*(X[x-1]);
        calstr *= 26;
        calstr += (str[i+x-1]-'a');
        if (calstr == calpat)
        {
            cout << i << "\n";
            return true;
        }
    }
    return false;
}
int sr(string str)
{
    string pat = str+str;
    for (int i = 1; i <= str.length(); i++)
    {
        if (str.length() % i == 0 && pat.substr(i,str.length()) == str)
        {
            cout << pat.substr(0,i) << "\n";
            return i;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie();cout.tie(0);
    X[0] = 1;
    string pat,str;
    cin >> str >> pat;
    for (long long i = 0; i < pat.length(); i++)
    {
        X[i+1] = X[i]*26;
        //cout << X[i] << " ";
    }
    
    if (rapi(str,pat))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    cout << sr(str);
    return 0;
}