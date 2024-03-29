#include <bits/stdc++.h>
using namespace std;

char q[1000];
int f = 0,r = -1;

bool empty()
{
    if (f > r)
    {
        return true;
    }
    return false;
}

void deq()
{
    f++;
}

void enq(char ch)
{
    q[++r] = ch;
}

void printq()
{
    for (int i = f; i <= r; i++)
    {
        cout << q[i] << " ";
    }
    cout << "\n";
}

int main()
{
    enq('A');
    enq('B');
    printq();
    deq();
    printq();
}