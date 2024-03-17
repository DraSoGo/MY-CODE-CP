#include <bits/stdc++.h>
using namespace std;

char st[10];
int top = -1;

bool empty()
{
    return top == -1;
}

void printst()
{
    for (int i = 0; i < top; i++)
    {
        cout << st[i] << " ";
    }
    cout << "\n";
}

void pop()
{
    st[top--];
}
void push(char ch)
{
    st[++top] = ch;
}

int main()
{
    push('A');
    push('B');
    push('C');
    push('D');
    printst();
    pop();
    printst();
    push('D');
    push('D');
    printst();
}