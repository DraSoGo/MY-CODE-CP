#include "bsearch.h"
#include <vector>

using namespace std;

int binary_search(const vector<int>& arr, int target)
{
     int idx = lower_bound(arr.begin(),arr.end(),target)-arr.begin();
     if (idx < arr.size() && arr[idx] == target)
     {
        return idx;
     }
    return -1;
}