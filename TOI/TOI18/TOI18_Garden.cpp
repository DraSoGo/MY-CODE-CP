#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,q,x;
    cin >> n >> q;
    int L[n],R[n],DPL[n],DPR[n];
    memset(DPL,0,sizeof(DPL));
    memset(DPR,0,sizeof(DPR));
    vector <int> LISL,LISR;
    for (int i = 0; i < n; i++)
    {
        cin >> L[i];
        R[n-i-1] = L[i];
    }
    for (int i = 0; i < n; i++)
    {
        int idxl = lower_bound(LISL.begin(),LISL.end(),L[i])-LISL.begin();
        int idxr = lower_bound(LISR.begin(),LISR.end(),R[i])-LISR.begin();
        if (idxl >= LISL.size())
        {
            LISL.push_back(L[i]);
        }
        else
        {
            LISL[idxl] = L[i];
        }
        if (idxr >= LISR.size())
        {
            LISR.push_back(R[i]);
        }
        else
        {
            LISR[idxr] = R[i];
        }
        DPL[i] = idxl;
        DPR[n-i-1] = idxr;
    }
    while (q--)
    {
        cin >> x;
        cout << min(DPL[x],DPR[x]) << "\n";
    }
    return 0;
}