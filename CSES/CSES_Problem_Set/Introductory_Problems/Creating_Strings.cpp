#include <bits/stdc++.h>
using namespace std;

int A[26];

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string st,ans = "";
    int n = 0;
    cin >> st;
    for (int i = 0; i < st.length(); i++)
    {
        A[st[i]-'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < A[i]; j++)
        {
            ans += char(i+'a');
        }
    }
    st = ans;
    while (next_permutation(st.begin(),st.end()))
    {
        n++;
    }
    cout << n+1 << "\n";
    cout << ans << "\n";
    while (next_permutation(ans.begin(),ans.end()))
    {
        cout << ans << "\n";
    }
    return 0;
}
