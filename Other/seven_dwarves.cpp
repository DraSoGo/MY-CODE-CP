#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[9],sum = 0,h = 100,x = 0,a = 0,b = 0;
    for (int i = 0; i < 9; i++)
    {
        cin >> A[i];
        sum += A[i];
    }
    h = sum - h;
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (A[i] + A[j] == h)
            {
                a = A[i];
                b = A[j];
                x = 1;
                break;
            }
        }
        if (x == 1)
        {
            break;
        }
    }
    for (int i = 0; i < 9; i++)
    {
        if (A[i] != a && A[i] != b)
        {
            cout << A[i] << "\n";
        }
    }
}