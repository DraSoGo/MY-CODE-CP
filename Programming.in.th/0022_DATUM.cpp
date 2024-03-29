#include <bits/stdc++.h>
using namespace std;
int main()
{
    string A[7] = {"Wednesday","Thursday","Friday","Saturday","Sunday","Monday", "Tuesday"};
    int M[11] = {31,28,31,30,31,30,31,31,30,31,30};
    int a,b,m = 0;
    cin >> a >> b;
    for (int i = 0; i < b - 1; i++)
    {
        m += M[i];
    }
    a += m;
    a %= 7;
    cout << A[a];
}