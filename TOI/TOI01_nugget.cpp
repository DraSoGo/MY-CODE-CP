#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[101];
    int n;
    A[6] = 1;
    A[9] = 1;
    A[20] = 1;
    cin >> n;
    for(int i = 1;i <= 100;i++)
    {
        if((i >= 6 && A[i-6] == 1) || (i >= 9 && A[i-9] == 1) || ( i >= 20 && A[i-20] == 1))
        A[i] = 1;
    }
    
    if(n < 6)
    {
        cout << "no";
        return 0;
    }
    for(int i = 0;i <= n;i++)
    {
        if(A[i] == 1)
        {
            cout << i << "\n";
        }
    }
}