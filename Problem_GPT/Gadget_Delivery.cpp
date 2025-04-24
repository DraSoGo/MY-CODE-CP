//https://chatgpt.com/canvas/shared/680a6a26253c8191a9bcb1f2f4f455b3
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,sum = 0;
    char x;
    cin >> n;
    vector <int> V[26],QS[26],DP[26];
    for (int i = 0; i < 26; i++)
    {
        QS[i].push_back(0);
        DP[i].push_back(0);
    }
    
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        V[x-'A'].push_back(i);
        QS[x-'A'].push_back(QS[x-'A'].back()+V[x-'A'].back());
        if (V[x-'A'].size() <= 1)
        {
            continue;
        }
        DP[x-'A'].push_back(DP[x-'A'].back()+((i*(V[x-'A'].size()-1))-QS[x-'A'][QS[x-'A'].size()-2]));
    }
    for (int i = 0; i < 26; i++)
    {
        sum += DP[i].back();
    }
    cout << sum;
    return 0;
}