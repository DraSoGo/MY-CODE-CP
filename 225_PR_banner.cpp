#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,w,i,j,l;
    char ch;
    cin >> ch >> a >> w >> l;
    int k = 2*a+1;
    l = l + 1;
    for (int ii = 0; ii < k*l; ii++)
    {
        for (int jj = 0 ; jj < w; jj++)
        {
            i = ii % k;
            j = (jj+k-ii/k)%k;
            if (i <= j+a && i >= j-a && i+j >= a && j+i <= 3*a)
            {
                cout << ch;
            }
            else
            {
                cout << ".";
            }
        }
        cout << "\n";
    }   
}