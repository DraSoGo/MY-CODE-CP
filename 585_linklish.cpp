#include <bits/stdc++.h>
using namespace std;

struct listnode
{
    int val;
    struct listnode *next;
};

listnode *getn() //create node
{
    listnode *node;
    node = new listnode;
    node -> next = NULL;
    return node;
}

void prtlst(listnode *node) //travel path
{
    while (node != NULL)
    {
        if (node -> next != NULL)
        {
            cout << node -> val << " -> ";
        }
        else
        {
            cout << node -> val;
        }
        node = node -> next;
    }
    cout << "\n";
}

int main()
{
    listnode *n1 = getn();
    n1 -> val = 10;
    listnode *n2 = getn();
    n2 -> val = 20;
    listnode *n3 = getn();
    n3 -> val = 30;
    n1 -> next = n2;
    n2 -> next = n3;
    listnode *n4 = getn(); //insert on head
    n4 -> val = 40;
    n4 -> next = n1;
    listnode *n5 = getn(); //insert between list
    n5 -> val = 50;
    n1 -> next = n5;
    n5 -> next = n2;
    listnode *n6 = getn(); //insert on tail
    n6 -> val = 60;
    n3 -> next = n6;
    n6 -> next = NULL;
    prtlst(n4);
    listnode *h = n4; //remove on head
    h = h -> next;
    delete n4;
    prtlst(h);
    listnode *bub = h -> next; //remove between list
    h -> next = bub -> next;
    delete bub;
    prtlst(h);
    listnode *ptr = h; //remove on last
    while (ptr -> next != NULL)
    {
        if (ptr -> next -> next == NULL)
        {
            listnode *bul = ptr -> next -> next;
            ptr -> next = NULL;
            delete bul;
            break;
        }
        ptr = ptr -> next;
    }
    prtlst(h);   
}