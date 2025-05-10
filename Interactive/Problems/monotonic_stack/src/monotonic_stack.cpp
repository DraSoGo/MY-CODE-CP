#include "monotonic_stack.h"
#include <bits/stdc++.h>
using namespace std;

vector<int> next_smaller_elements(const vector<int>& arr)
{
    stack <int> S;
    S.push(-1);
    vector <int> ANS(arr.size());
    for (int i = arr.size()-1; i >= 0; i--)
    {
        while (S.top() > arr[i])
        {
            S.pop();
        }
        ANS[i] = S.top();
        S.push(arr[i]);
    }
    return ANS ;
}