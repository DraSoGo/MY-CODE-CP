#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 10;
    int *p = &a;
    cout << p << " = " << *p;
    int A[] = {1,2,3,4,5};
    int *pA1 = A;
    int *pA2 = &A[0];
    cout << "\n" << pA1 << " = " << *pA1;
    cout << "\n" << pA2 << " = " << *pA2;
    cout << "\n";
    for (int i = 0; i < 5; i++)
    {
        cout << pA1 << " " << *pA1 << "\n";
        pA1++;
    }
    int *p2 = new int;
    *p2 = 5;
    cout << *p2;
    delete p2;
}