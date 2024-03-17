#include <bits/stdc++.h>
using namespace std;
int i = 0;
typedef struct CA
{
    int d;
    CA *next;
}
ND;
ND *a;
ND *p;
ND *b;
ND *n;
void E (ND *x) 
{
    p = a;
    while (1) 
    {
        if (p -> next == NULL)
        {
            p -> next = x;
            break;
        }
        p = p->next;
    }
}
void H (ND *y) 
{
    a -> next = y;
}
main () {
    char f;
    int e;
    while (1) 
    {
        cout << "Enter command : ";
        cin >> f;
        if (f == 'E') break;
        if (f == 'A') 
        {
            cout << "Enter Data : ";
            cin >> e;
            n = new ND;
            n -> d = e;
            n -> next = NULL;
            if (i == 0) 
            {
                a = n;
            } 
            else if (i == 1) 
            {
                H(n);
            } 
            else 
            {
                E(n);
            }
        } 
        else if (f == 'D') 
        {
            cout << "Enter Data : ";
            cin >> e;
            b = a;
            if (b -> d == e) 
            {
                a = a -> next;
                delete b;
            }
            p = a;
            while (1) 
            {
                if (b -> next -> d == e) 
                {
                    b = b -> next;
                    p -> next = b -> next;
                    delete b;
                    break;
                }
                b = b -> next;
                p = p -> next;
            }
            i--;
        } 
        else if (f == 'P') 
        {
            p = a;
            cout << "***Data in Linked List are: ";
            while (1) 
            {
                cout << p -> d << " ";
                if (p -> next == NULL) 
                {
                    break;
                }
                p = p -> next;
            }
            cout << "***\n";
        }
        i++;
    }
}