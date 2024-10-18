#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n;
    cin >> n;
    while (n--)
    {
        long long p,y,c = 0;
        string x;
        cin >> y >> p >> x;
        long long A[26];
        memset(A,0,sizeof(A));
        for (long long i = 0; i < y; i++)
        {
            A[x[i]-'a']++;
            if (A[x[i]-'a'] > p)
            {
                cout << "NO";
                c = 1;
                break;
            }
        }
        if (c == 0)
        {
            cout << "YES";
        }
        cout << "\n";
    }
    
    return 0;
}
