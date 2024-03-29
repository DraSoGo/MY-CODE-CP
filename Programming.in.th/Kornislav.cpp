#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> A[i];
    }
    sort(A,A+4,greater<int>());
    cout << A[1]*A[3];
}