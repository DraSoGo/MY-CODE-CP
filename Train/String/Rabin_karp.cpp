#include <bits/stdc++.h>
using namespace std;

int A[20];

bool rabin(string pat,string check)
{
    int np = pat.size(),nc = check.size(),hpat = 0,hcheck = 0;
    for (int i = 0; i < nc; i++)
    {
        hpat += (pat[i]-'a')*A[i];
        hcheck += (check[i]-'a')*A[i];
    }
    // cout << hpat << " " << hcheck << "\n";
    if (hcheck == hpat)
    {
        return 1;
    }
    for (int i = 1; i <= np-nc; i++)
    {
        hpat -= pat[i-1]-'a';
        hpat /= 26;
        hpat += (pat[i+nc-1]-'a')*A[nc-1];
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
    A[0] = 1;
    for (int i = 1; i < check.size(); i++)
    {
        A[i] = A[i-1]*26;
    }
    cout << rabin(pat,check);
    return 0;
}
/*
INPUT
abdjkhvjghfkbknvjkxc
vjkxc
OUTPUT
YES
*/