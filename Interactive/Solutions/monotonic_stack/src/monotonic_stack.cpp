#include "monotonic_stack.h"
#include <stack>
using namespace std;

vector<int> next_smaller_elements(const vector<int>& arr) {
    int n = arr.size();
    vector<int> result(n, -1);
    stack<int> st;

    for (int i = n - 1; i >= 0; --i) {
        while (!st.empty() && st.top() >= arr[i]) {
            st.pop();
        }
        if (!st.empty()) result[i] = st.top();
        st.push(arr[i]);
    }
    return result;
}