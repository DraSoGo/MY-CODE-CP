#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, sum = 0, ch;
    deque<int> Q;
    cin >> n >> k;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    sum += A[0];
    //cout << 0 << " ";
    Q.push_back(1);
    for (int i = 2; i < n; i++)
    {
        if (i == n-1)
        {
            sum += A[i];
            break;
        }
        if (A[i] > A[Q.front()])
        {
            Q.push_back(i);
        }
        if (A[i] <= A[Q.front()])
        {
            //cout << i << "," << A[i] << " " << Q.front() << "," << A[Q.front()] << "\n";
            Q.clear();
            Q.push_back(i);
            //cout << A[Q.front()] << "\n";
            sum += A[Q.front()];
        }
        if (i - Q.front() == k)
        {
            Q.pop_front();
            sum += A[Q.front()];
            //cout << Q.front() << " ";
        }
    }
    cout << sum;
}