#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,s,co,a,b,c;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        co = 0;
        cin >> s;
        int B[s];
        for (int j = 0; j < s; j++)
        {
            cin >> B[j];
        }
        for (int j = 0; j < n-s; j++)
        {
            c = 0;
            for (int l = 0; l < s; l++)
            {
                if (l >= 1)
                {
                    b = A[j+l] + B[l];
                    if (b != a)
                    {
                        c = 1;
                        break;
                    }
                    
                }
                a = A[j+l] + B[l];
            }
            if (c == 0)
            {
                co++;
            }
        }
        cout << co << "\n";
    }
}