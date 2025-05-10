#include "lis.h"
#include <vector>
using namespace std;

int lis(const vector<int>& nums)
{
    vector <int> V;
    for (auto x:nums)
    {
        int idx = lower_bound(V.begin(),V.end(),x) - V.begin();
        if (idx >= V.size())
        {
            V.push_back(x);
        }
        else
        {
            V[idx] = x;
        }
    }
    return V.size();
}