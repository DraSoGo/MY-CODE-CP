#include <bits/stdc++.h>
using namespace std;

int a;
bool co;

void bcouter (int m,int n,int A[],int sum)
{
    if (co)
    {
        return;
    }
    if (sum > a)
    {
        return; 
    }
    if (m == n)
    {
        if (sum == a)
        {
            co = true;
            return;
        }
    }
    else
    {
        bcouter(m+1,n,A,sum + A[m]);
        bcouter(m+1,n,A,sum);
    }
}
int main()
{
    int n,b,c;
    cin >> c;
    for (int j = 0; j < c; j++)
    {
        int x = 0;
        co = false;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            x += A[i];
        }
        if (x % 2 == 0)
        {
            a = x/2;
            bcouter(0,n,A,0);
        }
        if(co == true)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        
    }
    
}