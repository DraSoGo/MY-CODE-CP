#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int A[3],B[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> B[i];
    }
    cout << A[1]*B[2] - A[2]*B[1] << " " << A[2]*B[0] - A[0]*B[2] << " " << A[0]*B[1] - A[1]*B[0];
    return 0;
}
