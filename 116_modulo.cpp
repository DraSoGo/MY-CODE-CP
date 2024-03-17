#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,A[10],c = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> a;
        a = a % 42;
        A[i] = a;
    }
    for (int i = 0; i < 10; i++)
    {
        bool ch;
        for (int j = i + 1; j < 10; j++)
        { 
            if (A[i] == A[j])
            {
                ch = false;
                break;
            }
            else
            {
                ch = true;
            }  
        }
        if (ch == true)
        {
            c++;
        }
    }
    cout << c;
}