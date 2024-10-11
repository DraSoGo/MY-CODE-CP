#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue <int> Q;
    Q.push(1);
    Q.push(2);
    Q.push(3);
    cout << Q.front() << " " << Q.back() << "\n";
    Q.pop();
    cout << Q.front() << " " << Q.back() << "\n";
    cout << Q.size();
    Q.empty();
    return 0;
}