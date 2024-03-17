#include<bits/stdc++.h>
using namespace std;
main()
{
    int SMS[3][3],c = 1,ptx,pty,ch = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            SMS[i][j] = c;
            c++;
        }
    }
    stack <char> text,out;
    char TWO[] = {'A','B','C'};
    char THREE[] = {'D','E','F'};
    char FOUR[] = {'G','H','I'};
    char FIVE[] = {'J','K','L'};
    char SIX[] = {'M','N','O'};
    char SEVEN[] = {'P','Q','R','S'};
    char EIGHT[] = {'T','U','V'};
    char NINE[] = {'W','X','Y','Z'};
    int n,a,b,x,y;
    cin >> n;
    cin >> a >> b;
    if (a == 1)
    {
        ptx = 0;
        pty = 0;
    }
    else if (a == 2)
    {
        b = b%3;
        if (b == 0)
        {
            b = 3;
        }
        text.push(TWO[b-1]);
        ptx = 1;
        pty = 0;
    }
    else if (a == 3)
    {
        b = b%3;
        if (b == 0)
        {
            b = 3;
        }
        text.push(THREE[b-1]);
        ptx = 2;
        pty = 0;
    }
    else if (a == 4)
    {
        b = b%3;
        if (b == 0)
        {
            b = 3;
        }
        text.push(FOUR[b-1]);
        ptx = 0;
        pty = 1;
    }
    else if (a == 5)
    {
        b = b%3;
        if (b == 0)
        {
            b = 3;
        }
        text.push(FIVE[b-1]);
        ptx = 1;
        pty = 1;
    }
    else if (a == 6)
    {
        b = b%3;
        if (b == 0)
        {
            b = 3;
        }
        text.push(SIX[b-1]);
        ptx = 2;
        pty = 1;
    }
    else if (a == 7)
    {
        b = b%4;
        if (b == 0)
        {
            b = 4;
        }
        text.push(SEVEN[b-1]);
        ptx = 0;
        pty = 2;
    }
    else if (a == 8)
    {
        b = b%3;
        if (b == 0)
        {
            b = 3;
        }
        text.push(EIGHT[b-1]);
        ptx = 1;
        pty = 2;
    }
    else if (a == 9)
    {
        b = b%4;
        if (b == 0)
        {
            b = 4;
        }
        text.push(NINE[b-1]);
        ptx = 2;
        pty = 2;
    }
    for (int i = 0; i < n - 1; i++)
    {
        cin >> x >> y >> b;
        if (ptx + x < 3 && ptx + x >= 0  && pty + y < 3 && pty + y >= 0)
        {
            ptx += x;
            pty += y;
            if (SMS[pty][ptx] == 1)
            {
                for (int j = 0; j < b; j++)
                {
                    text.pop();
                }
                ptx = 0;
                pty = 0;
            }
            else if (SMS[pty][ptx] == 2)
            {
                b = b%3;
                if (b == 0)
                {
                    b = 3;
                }
                text.push(TWO[b-1]);
                ptx = 1;
                pty = 0;
            }
            else if (SMS[pty][ptx] == 3)
            {
                b = b%3;
                if (b == 0)
                {
                    b = 3;
                }
                text.push(THREE[b-1]);
                ptx = 2;
                pty = 0;
            }
            else if (SMS[pty][ptx] == 4)
            {
                b = b%3;
                if (b == 0)
                {
                    b = 3;
                }
                text.push(FOUR[b-1]);
                ptx = 0;
                pty = 1;
            }
            else if (SMS[pty][ptx] == 5)
            {
                b = b%3;
                if (b == 0)
                {
                    b = 3;
                }
                text.push(FIVE[b-1]);
                ptx = 1;
                pty = 1;
            }
            else if (SMS[pty][ptx] == 6)
            {
                b = b%3;
                if (b == 0)
                {
                    b = 3;
                }
                text.push(SIX[b-1]);
                ptx = 2;
                pty = 1;
            }
            else if (SMS[pty][ptx] == 7)
            {
                b = b%4;
                if (b == 0)
                {
                    b = 4;
                }
                text.push(SEVEN[b-1]);
                ptx = 0;
                pty = 2;
            }
            else if (SMS[pty][ptx] == 8)
            {
                b = b%3;
                if (b == 0)
                {
                    b = 3;
                }
                text.push(EIGHT[b-1]);
                ptx = 1;
                pty = 2;
            }
            else if (SMS[pty][ptx] == 9)
            {
                b = b%4;
                if (b == 0)
                {
                    b = 4;
                }
                text.push(NINE[b-1]);
                ptx = 2;
                pty = 2;
            }
        }
        
    }
    while (!text.empty())
    {
        out.push(text.top());
        text.pop();
        ch = 1;
    }
    if (ch == 0)
    {
        cout << "null";
    }
    else
    {
        while (!out.empty())
        {
            cout << out.top();
            out.pop();
        }
    }
}