#include <iostream>
#include <vector>

using namespace std;

typedef vector<vector<int>> Matrix;

void printMatrix(const Matrix &matrix)
{
    for (const auto &row : matrix)
    {
        for (const auto &elem : row)
        {
            cout << elem << " ";
        }
        cout << endl;
    }
    cout << endl;
}

Matrix add(const Matrix &A, const Matrix &B)
{
    int rows = A.size();
    int cols = A[0].size();
    Matrix result(rows, vector<int>(cols));

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
    return result;
}

Matrix subtract(const Matrix &A, const Matrix &B)
{
    int rows = A.size();
    int cols = A[0].size();
    Matrix result(rows, vector<int>(cols));

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
    return result;
}

Matrix multiply(const Matrix &A, const Matrix &B)
{
    int rows = A.size();
    int cols = B[0].size();
    int inner = A[0].size();
    Matrix result(rows, vector<int>(cols, 0));

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            for (int k = 0; k < inner; ++k)
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return result;
}

Matrix transpose(const Matrix& A) {
    int rows = A.size();
    int cols = A[0].size();
    Matrix result(cols, vector<int>(rows));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[j][i] = A[i][j];
        }
    }
    return result;
}

int main()
{
    Matrix AB = {{5, 2}, {16, 9}};
    Matrix BA = {{1, 2, 0}, {4, 5, 4}, {7, 8, 8}};
    Matrix A = {{1, -1}, {3, 2}};
    Matrix B = {{-1, 3, 2}, {1, 3, 0}};
    Matrix C = {{-1, 2}, {0, 1}, {3, -2}};
    Matrix D = {{3, -2}, {2, 0}};
    Matrix ANS = multiply(A,A);                                                                
    printMatrix(ANS);
    return 0;
}
