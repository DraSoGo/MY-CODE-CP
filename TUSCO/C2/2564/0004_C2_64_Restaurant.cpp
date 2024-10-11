#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k = 0,a;
    cin >> n >> m;
    pair <int,int> A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        A[i] = {a,0};
    }
    sort(A,A+n);
    while (m > 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (A[i].second == 0)
            {
                m--;
                if(m<0)
                {
                    break;
                }
                cout << k << "\n";
                A[i].second = A[i].first;
            }
            A[i].second--;
        }
        k++;
    }
}