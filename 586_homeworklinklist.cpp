#include <bits/stdc++.h>
using namespace std;

struct listnode
{
    int val;
    struct listnode *next;
};

listnode *getn(int n)
{
    listnode *node;
    node = new listnode;
    node->next = NULL;
    node->val = n;
    return node;
}

void prtlst(listnode *node)
{
    while (node != NULL)
    {
        if (node->next != NULL)
        {
            cout << node->val << " -> ";
        }
        else
        {
            cout << node->val;
        }
        node = node->next;
    }
    cout << "\n";
}


int main()
{
    listnode *A[10000];
    listnode *h;
    int n,k = 1;
    char c;
    cout << "Enter command: ";
    cin >> c;
    while (c != 'E')
    {
        if (c == 'A')
        {
            cout << "Enter Data: ";
            cin >> n;
            A[k] = getn(n);
            if (k == 1)
            {
                h = A[1];
            }
            if (k > 1)
            {
                A[k - 1]->next = A[k];
            }
            k++;
        }
        else if (c == 'P')
        {
            prtlst(h);
        }
        else if (c == 'D')
        {
            cout << "Enter Data: ";
            cin >> n;
            listnode *ptr = h;
            if (ptr->val == n)
            {
                h = ptr->next;
                delete ptr;
            }
            else
            {
                while (ptr->next != NULL)
                {
                    if (ptr->next->next == NULL)
                    {
                        listnode *bu = ptr->next;
                        ptr->next = NULL;
                        delete bu;
                        k--;
                        break;
                    }
                    else if(ptr->next->val == n)
                    {
                        listnode *bu = ptr->next;
                        ptr->next = bu->next;
                        delete bu;
                        break;
                    }
                    ptr = ptr->next;
                }
            }
        }
        cout << "Enter command: ";
        cin >> c;
    }
}