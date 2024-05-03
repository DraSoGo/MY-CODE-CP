#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,sum = 0;
    cin >> a;
    int A[a],B[a];
    for (int i = 0; i < a; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < a; i++)
    {
        cin >> B[i];
    }
    sort(A,A+a);
    sort(B,B+a);
    for (int i = 0; i < a; i++)
    {
        sum += abs(A[i] - B[i]);
    }
    cout << sum;
    return 0;
}