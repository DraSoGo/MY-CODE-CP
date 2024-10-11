#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,r,A[10],nm,a = 0,b = 0,p;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> l >> r;
        int x = 0,y = r,z;
        while (y > 0)
        {
            x++;
            z = y % 10;
            y /= 10;
        }
        if (z == 1)
        {
            p = 9*(pow(10,x-2));
        }
        else
        {
            p = pow(10,x-1);
        }
        if (p <= l)
        {
            p = l;
        }
        else
        {
            z = 1;
        }
        
        if (r >= (z+1)*p)
        {
            r = (z+1)*p;
        }
        // cout << p << " " << r << " " << "\n";
        for (int j = p; j <= r; j++)
        {
            memset(A, 0, sizeof(A));
            int k = j,ch = 0;
            while(k > 0)
            {
                nm = k % 10;
                k /= 10;
                A[nm]++;
                if(A[nm]>=2)
                {
                    a++;
                    b = max(b,a);
                    ch = 1;
                    break;
                }
            }
            if(ch == 0)
            {
                a=0;
            }
        }
        cout << b << "\n";
        a = 0;
        b = 0;
    }
	return 0;
}