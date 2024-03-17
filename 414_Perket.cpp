#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,b,mn = INT_MAX,x;
    cin >> n;
    int S[n], B[n];
    for (int i = 0; i < n; i++)
    {
        cin >> S[i] >> B[i];
    }
    
    for (int i = 1; i < pow(2,n); i++)
    {
        s = 1;
        b = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
			{
                s *= S[j];
                b += B[j];
			}
        }
        mn = min(mn,abs(s - b));
        //cout << s << " " << b << "\n";
    }
    cout << mn;
}