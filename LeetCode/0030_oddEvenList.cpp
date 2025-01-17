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
    ListNode *oddEvenList(ListNode *head)
    {
        if (head == nullptr || head->next == nullptr)
        {
            return head;
        }
        ListNode *odd = head;
        ListNode *even = head->next;
        ListNode *tmp = even;
        while (even != nullptr && even->next != nullptr)
        {
            odd->next = odd->next->next;
            odd = odd->next;
            even->next = even->next->next;
            even = even->next;
        }
        odd->next = tmp;
        return head;
    }
    void printnode(ListNode *head)
    {
        ListNode* cur = oddEvenList(head);
        while (cur != nullptr)
        {
            cout << cur->val << " ";
            cur = cur->next;
        }
    }
};

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ListNode *head = nullptr;
    ListNode *tail = nullptr;
    int n,a;
    cin >> n;
    while (n--)
    {
        cin >> a;
        ListNode *nwN = new ListNode(a);
        if (head == nullptr)
        {
            head = nwN;
            tail = nwN;
        }
        else
        {
            tail ->next = nwN;
            tail = tail->next;
        }
    }
    Solution so;
    so.printnode(head);
    return 0;
}