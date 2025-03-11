#include <bits/stdc++.h>
using namespace std;
string sr,ans = "";

bool vis[11];
map <string,int> visstr;

void gen(bool mem[])
{
    if (sr.size() == ans.size())
    {
        if (!visstr[ans])
        {
            cout << ans << "\n";
            visstr[ans] = 1;
        }
        return;
    }
    for (int i = 0; i < sr.size(); i++)
    {
        // V.push_back(sr[i]);
        if (!mem[i])
        {
            ans += sr[i];
            mem[i] = 1;
            gen(mem);
            mem[i] = 0;
            ans.erase(ans.size()-1);
        }
        // V.pop_back();
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> sr;
    sort(sr.begin(),sr.end());
    // gen(vis);
    cout << sr << "\n";
    while (next_permutation(sr.begin(),sr.end()))
    {
        cout << sr << "\n";
    }
    
    return 0;
}