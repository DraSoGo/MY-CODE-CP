#include <bits/stdc++.h>
using namespace std;
bool isSafe(vector<int>& board, int row, int col)
{
    for (int i = 0; i < row; i++) {
        if (board[i] == col || abs(i - row) == abs(board[i] - col))
        {
            return false;
        }
    }
    return true;
}
void solveNQueens(vector<vector<int>>& res, vector<int>& board, int n, int row)
{
    if (row == n)
    {
        res.push_back(board);
        return;
    }
    for (int col = 0; col < n; col++)
    {
        if (isSafe(board, row, col))
        {
            board[row] = col;
            solveNQueens(res, board, n, row + 1);
            board[row] = -1;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> res;
        vector<int> board(n, -1);
        solveNQueens(res, board, n, 0);
        if (res.empty())
        {
            cout << "-1";
        } else {
            for (auto& sol : res)
            {
                cout << "[";
                for (int i = 0; i < n; i++)
                {
                    cout << sol[i] + 1 << " ";
                }
                cout << "] ";
            }
        }
        cout << "\n";
    }
    return 0;
}
