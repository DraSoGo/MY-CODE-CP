#include <bits/stdc++.h>
using namespace std;

const int mxi = 50;
unsigned long long S[mxi + 10];

void geninput(string in, int c)
{
    ofstream fout;
    fout.open(in);

    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<int> ranN(1, 1e3);
    uniform_int_distribution<int> ranx(-1e5, 1e5);
    int N = ranN(gen);
    int t = ranx(gen);
    int A[N];
    int ch = 0;
    while (ch != 1)
    {
        for (int i = 0; i < N; i++)
        {
            A[i] = ranx(gen);
            if (c >= 2)
            {
                if (A[i] == t)
                {
                    ch = 1;
                }
            }
            else
            {
                ch = 1;
            }
        }
    }
    fout << N << "\n";
    for (int i = 0; i < N; i++)
    {
        fout << A[i] << " ";
    }
    fout << "\n" << t;
}

int main()
{
    for (int i = 0; i <= 9; i++)
    {
        geninput("./input/input" + to_string(i) + ".txt", i);
    }
    return 0;
}
//for i in {0..9}; do    ./uiiaiouiaio < "input/input$i.txt" > "output/output$i.txt" & done
//chmod +x Easy_search
//bash -c 'for i in {0..9}; do ./Easy_search < "input/input$i.txt" > "output/output$i.txt"; done'