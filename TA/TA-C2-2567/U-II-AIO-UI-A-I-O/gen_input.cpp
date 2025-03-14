#include <bits/stdc++.h>
using namespace std;

const int mxi = 50;
unsigned long long S[mxi + 10];
unsigned long long A[mxi + 10];

void geninput(string in, int c)
{
    ofstream fout;
    fout.open(in);

    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<int> ranT(1, 1e5);
    uniform_int_distribution<int> rani1(1, 5);
    uniform_int_distribution<int> rani2(38, 40);
    unsigned long long T = ranT(gen);
    if (c < 3)
    {
        fout << T << "\n";
        for (int i = 0; i < T; i++)
        {
            unsigned long long n = rani1(gen);
            uniform_int_distribution<unsigned long long> ranx1(1, A[n]);
            unsigned long long x = ranx1(gen);
            fout << n << " " << x << "\n";
        }
    }
    else
    {
        fout << T << "\n";
        for (int i = 0; i < T; i++)
        {
            unsigned long long n = rani2(gen);
            // cout << S[n+1] << "\n";
            uniform_int_distribution<unsigned long long> ranx2(A[n-2], A[n]);
            unsigned long long x = ranx2(gen);
            fout << n << " " << x << "\n";
        }
    }
}

int main()
{
    S[1] = 0;
    S[2] = 1;
    for (int i = 3; i < mxi; i++)
    {
        S[i] = 2*S[i-1] + S[i-2];
        // cout << S[i] << "\n";
    }
    A[1] = 3;
    for (int i = 2; i < mxi; i++)
    {
        int idx = (i % 4 == 0) ? 4 : (i % 4);
        int rlen = (idx == 4) ? 2 : 3;
        A[i] = 2 * A[i - 1] + S[i + 1] * rlen;
    }
    for (int i = 0; i <= 9; i++)
    {
        geninput("./input/input" + to_string(i) + ".txt", i);
    }
    return 0;
}
//for i in {0..9}; do    ./uiiaiouiaio < "input/input$i.txt" > "output/output$i.txt" & done
//bash -c 'for i in {0..9}; do ./uiiaiouiaio < "input/input$i.txt" > "output/output$i.txt"; done'
//chmod +x uiiaiouiaio