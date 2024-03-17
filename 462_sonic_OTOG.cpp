#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int A[46],sum,x;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        sum = 0,x = 26;
        memset(A,0,sizeof(A));
        for (int j = 0; j < a.length(); j++)
        {
            if (a[j] >= 'A' && a[j] <= 'Z')
            {
                A[a[j] - 'A']++;
            }
            if (a[j] >= 'a' && a[j] <= 'z')
            {
                A[(a[j] - 'a')]++;
            }
        }
        sort(A,A+46,greater <int>());
        for (int j = 0; j < 46; j++)
        {
            sum += A[j]*x;
            x--;
            if (x == 0)
            {
                x--;
            }
        }
        cout << sum << "\n";
    }
    // for (int i = 0; i < 46; i++)
    // {
    //     cout << A[i] << "\n";
    // }
    
}