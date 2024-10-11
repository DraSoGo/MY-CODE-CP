#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,b,c,d,e = 0;
    cout << "A and B" <<"\n";
    cin >> a >> b;
    int A[a],B[b];
    cout << "member of A" << "\n";
    for (int i = 0; i < a; i++)
    {
        cin >> c;
        A[i] = c;
    }
    cout << "member of B" << "\n";
    for (int i = 0; i < b; i++)
    {
        cin >> d;
        B[i] = d;
    }
    if(b >= a)
    {
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                if (A[i] == B[j])
                {
                    e++;
                }
            }
        }
    }
    else if(a > b)
    {
        for (int i = 0; i < b; i++)
        {
            for (int j = 0; j < a; j++)
            {
                if (A[j] == B[i])
                {
                    e++;
                }
            }
        }
    }
    cout << "AUB = " << (a+b)-e;
}