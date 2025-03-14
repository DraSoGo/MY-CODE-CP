#include <bits/stdc++.h>
using namespace std;
const int sz = 1e5;
int A[sz];
map <int,int> MP;
int main()
{
    int n,x;
    cin >> n;
    fill(A,A+sz,-1);
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        MP[x] != 0 ? MP[x] = MP[x]:i != 0?MP[x] = i:MP[x] = -1;
        // cout << x << " " << i << "\n";
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> x;
        MP[x] == 0?cout << -1:MP[x] == -1?cout << 0:cout << MP[x];
        cout << " ";
    }
}