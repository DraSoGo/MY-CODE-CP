#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 1229,A[a],ch,co = 0,num,N[10001],c = 0;
    memset(N,0,sizeof(N));
    for (int i = 2; i < 10000; i++)
    {
        ch = 0;
        for (int j = 2; j*j <= i ; j++)
        {
            if (i % j == 0)
            {
                ch = 1;
                break;
            }
        }
        if (ch == 0)
        {
            A[co] = i;
            N[i] = 1;
            co++;
        }
    }
    cin >> num;
    for (int i = 0; A[i] <= num/2; i++)
    {
        if (N[num - A[i]] == 1)
        {
            c++;
            cout << A[i] << " " << num - A[i] << "\n";
        }
    }
    cout << c;
    return 0;
}