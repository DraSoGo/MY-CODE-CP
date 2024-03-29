#include<bits/stdc++.h>
using namespace std;
int co;
void search(string pat,string txt)
{
    int n = txt.length();
    int m = pat.length();
    for (int i = 0; i <= n - m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (txt[i + j] != pat[j])
            {
                break;
            }
            if (j == m)
            {
                co++;
            }
        }
    }
}
int main()
{
    long long n,mx = -1,a,ch,k;
    string virus,code,ans;
    cin >> virus >> n;
    for (int i = 0; i < n; i++)
    {
        co = 0;
        cin >> code;
        search(code,virus);
        if (co > mx)
        {
            mx = co;
            ans = code;
        }
        cout << co << "\n";
    }
    cout << ans;
    return 0;
}
