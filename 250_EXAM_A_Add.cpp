#include <bits/stdc++.h>
using namespace std;
int main() 
{
    string a,b;
    cin >> a >> b;
    int x = a.length(),y = b.length(),mx = max(a.length(),b.length()),j;
    int A[mx],B[mx],SUM[mx],sum,ch = 0;
    for (int i = 0; i < mx; i++)
    {
        SUM[i] = 0;
    }
    j = 0;
    for (int i = x - 1; i >= 0; i--)
    {
        A[j] = a[i] - '0';
        j++;
    }
    for (int i = j; i < mx; i++)
    {
        A[j] = 0;
        j++;
    }
    j = 0;
    for (int i = y - 1; i >= 0; i--)
    {
        B[j] = b[i] - '0';
        j++;
    }
    for (int i = j; i < mx; i++)
    {
        B[j] = 0;
        j++;
    }
    for (int i = 0; i < mx; i++)
    {
        sum = A[i] + B[i] + ch;
        if (sum < 10)
        {
            SUM[i] = sum;
            ch = 0;
        }
        else
        {
            SUM[i] = sum % 10;
            ch = 1;
        }
        
    }
    if (ch == 1)
    {
        cout << ch;
    }
    for (int i = mx - 1; i >= 0; i--)
    {
        cout << SUM[i];
    }
}
