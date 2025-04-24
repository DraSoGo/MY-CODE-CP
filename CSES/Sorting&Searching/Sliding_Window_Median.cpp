#include<bits/stdc++.h>
#include<bits/extc++.h>

using namespace std;
using namespace __gnu_pbds;

template<class T>
using ordered_multiset=tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
// using ordered_multiset=tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,k;
    cin >> n >> k;
    int m = (k-1)/2,A[n];
    ordered_multiset<pair<int,int>> OS;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < k; i++)
    {
        OS.insert({A[i],i});
    }
    cout << OS.find_by_order(m)->first << " ";
    // cout << *OS.find_by_order(0) << " ";
    // cout << *OS.find_by_order(1) << " ";
    // cout << *OS.find_by_order(2) << "\n";
    for (int i = 1; i <= n-k; i++)
    {
        auto a = OS.lower_bound({A[i-1],i-1});
        OS.erase(a);
        OS.insert({A[i+k-1],i+k-1});
        cout << OS.find_by_order(m)->first << " ";
        // cout << "-" << A[i-1] << " +" << A[i+k-1] << " ";
        // cout << *a << " ";
        // cout << *OS.find_by_order(0) << " ";
        // cout << *OS.find_by_order(1) << " ";
        // cout << *OS.find_by_order(2) << "\n";
    }
    return 0;
}