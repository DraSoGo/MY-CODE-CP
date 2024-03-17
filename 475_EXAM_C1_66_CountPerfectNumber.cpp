#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[1000],n,a,b,co;
    for (int i = 0; i < 1000; i++)
    {
        A[i] = pow(i+1,2);
    }
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        co = 0;
        for (int j = 0; j < 1000; j++)
        {
            if (A[j] >= a && A[j] <= b)
            {
                co++;
            }
            if (A[j] > b)
            {
                break;
            }
        }
        cout << co << "\n";
    }
    
}