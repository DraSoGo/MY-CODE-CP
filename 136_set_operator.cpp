#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,b,ch,c,y;
    cin >> a;
    int A[a];
    for (int i = 0; i < a; i++)
    {
        cin >> A[i];
    }
    cin >> b;
    int B[b];
    for (int i = 0; i < b; i++)
    {
        cin >> B[i];
    }
    int C[a+b],D[a+b],E[a+b];
    for (int i = 0; i < a + b; i++)
    {
        C[i] = 0;
        D[i] = 0;
        E[i] = 0;
    }
    ch = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (A[i] == B[j])
            {
                C[ch] = A[i];
                ch++;
            }
        }
    }
    if (ch == 0)
    {
        cout << -1;
    }
    sort(C,C+ch);
    for (int i = 0; i < ch; i++)
    {
        cout << C[i] << " ";
    }
    y = ch;
    cout << "\n";
    ch = 0;
    for (int i = 0; i < a; i++)
    {
        c = 0;
        for (int j = 0; j < b; j++)
        {
            if (A[i] == B[j])
            {
                c = 0;
                break;
            }
            else
            {
                c = 1;
            }
        }
        if (c == 1)
        {
            D[ch] = A[i];
            ch++;
        }
        
    }
    for (int i = 0; i < b; i++)
    {
        c = 0;
        for (int j = 0; j < a; j++)
        {
            if (B[i] == A[j])
            {
                c = 0;
                break;
            }
            else
            {
                c = 1;
            }
        }
        if (c == 1)
        {
            D[ch] = B[i];
            ch++;
        }
        
    }
    if (ch == 0)
    {
        cout << -1;
    }
    sort(D,D+ch);
    for (int i = 0; i < ch; i++)
    {
        cout << D[i] << " ";
    }
    int j = 0;
    cout << "\n";
    for (int i = 0; i < ch; i++)
    {
        E[i] = D[i];
    }
    // cout << ch << " " << y << "\n";
    for (int i = ch; i < ch + y; i++)
    {
        E[i] = C[j];
        j++;
    }
    sort(E,E+(ch+y));
    for (int i = 0; i < ch + y; i++)
    {
        cout << E[i] << " ";
    }
}