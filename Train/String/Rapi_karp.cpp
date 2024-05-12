#include <bits/stdc++.h>
using namespace std;

int x26[100];

bool rabi(string pat,string check)
{
    int hcheck = 0,hpat = 0;
    for (int i = 0; i < check.length(); i++)
    {
        hcheck += x26[i] * (check[i]-'a');
        hpat += x26[i] * (pat[i]-'a');
    }
    if (hpat == hcheck)
    {
        return 1;
    }
    for (int i = 1; i <= pat.length() - check.length(); i++)
    {
        hpat -= pat[i-1]-'a';
        hpat /= 26;
        hpat += x26[check.length()-1] * (pat[i+check.length()-1]-'a');
        if (hpat == hcheck)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string pat,check;
    cin >> pat >> check;
    int n = check.length();
    x26[0] = 1;
    for (int i = 1; i < n; i++)
    {
        x26[i] = x26[i-1] * 26;
    }
    if(rabi(pat,check))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
    return 0;
}
/*
INPUT
abdjkhvjghfkbknvjkxc
vjkxc
OUTPUT
YES
*/