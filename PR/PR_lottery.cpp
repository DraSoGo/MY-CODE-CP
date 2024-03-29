#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int A[a];
    for (int i = 0; i < a; i++)
    {
        cin >> A[i];
    }
    sort(A,A + a);
    for (int i = 0; i < 30; i++)
    {
        (A,A+a);
        for (int i = 0; i < 6; i++)
        {
            cout << A[i] << " ";
        }
        cout << "\n";
    }
    
    
}
