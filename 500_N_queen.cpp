#include <bits/stdc++.h>
#include <windows.h>
#define n 10
using namespace std;
int A[n],r[n],d1[2*n],d2[2*n],co = 0;

void show()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (A[j] == i)
            {
                cout << 'Q';
            }
            else
            {
                cout << '.';
            }
        }
        cout << "\n";
    }
    Sleep(500);
    system("cls");
}

void queen(int x)
{
    if(x == n)
    {
        //show();
        co++;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (r[i] == 0 && d1[x+i] == 0 && d2[x-i+n] == 0)
            {
                A[x] = i;
                r[i] = 1;
                d1[x+i] = 1;
                d2[x-i+n] = 1;
                queen(x+1);
                r[i] = 0;
                d1[x+i] = 0;
                d2[x-i+n] = 0;
            }
            
        }
    }
}

int main()
{
    memset(r,0,sizeof(r));
    memset(d1,0,sizeof(d1));
    memset(d2,0,sizeof(d2));
    queen(0);
    cout << co;
    return 0;
}