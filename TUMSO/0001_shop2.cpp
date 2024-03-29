#include <bits/stdc++.h>
using namespace std;

int countDays(vector<int> &A)
{
    int N = A.size();
    vector<bool> imported(N + 1, false);
    int count = 0, maxImported = 0;

    for (int i = 0; i < N; ++i)
    {
        imported[A[i]] = true;
        maxImported = max(maxImported, A[i]);
        if (maxImported == i + 1)
        {
            count++;
        }
    }
    return count;
}

void swapProducts(vector<int> &A, int L, int R)
{
    swap(A[L - 1], A[R - 1]);
}

void reverseProducts(vector<int> &A, int L, int R)
{
    reverse(A.begin() + L - 1, A.begin() + R);
}

int main()
{
    int N, Q;
    cin >> N >> Q;
    vector<int> A(N);

    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

    cout << countDays(A) << endl;

    for (int i = 0; i < Q; ++i)
    {
        int T, L, R;
        cin >> T >> L >> R;
        if (T == 1)
        {
            swapProducts(A, L, R);
        }
        else if (T == 2)
        {
            reverseProducts(A, L, R);
        }
        cout << countDays(A) << endl;
    }

    return 0;
}
