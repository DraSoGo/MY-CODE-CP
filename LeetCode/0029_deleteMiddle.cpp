#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{
public:
    Solution()
    {
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    }
    ListNode *deleteMiddle(ListNode *head)
    {
        int co = 0;
        ListNode *cur = head;
        while (cur != nullptr)
        {
            co++;
            cur = cur -> next;
        }
        if (co == 1)
        {
            return nullptr;
        }
        co = (co/2)-1;
        cur = head;
        for (int i = 0; i < co; i++)
        {
            cur = cur -> next;
        }
        cur -> next = cur -> next -> next;
        return head;
    }
    void printdelnode(ListNode *head)
    {
        ListNode *cur = deleteMiddle(head);
        while (cur != nullptr)
        {
            cout << cur -> val << " ";
            cur = cur -> next;
        }
        
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ListNode *head = nullptr;
    ListNode *tail = nullptr;
    int n, a;
    cin >> n;
    while (n--)
    {
        cin >> a;
        ListNode *newnode = new ListNode(a);
        if (head == nullptr)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }
    Solution so;
    so.printdelnode(head);
    return 0;
}