#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,*A,*B;
    cin >> a >> b;
    A = &a;
    B = &b;
    if (*A > *B)
    {
        int temp = *A;
        *A = *B;
        *B = temp;
    }
    cout << a << "\n" << b;
}