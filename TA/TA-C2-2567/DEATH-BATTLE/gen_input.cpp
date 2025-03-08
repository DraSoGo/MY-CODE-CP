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

    uniform_int_distribution<int> ranMN(1, 1e2);
    uniform_int_distribution<int> rano(1, 1e2);
    uniform_int_distribution<int> ranp(1, 10);
    int M = ranMN(gen);
    int N = ranMN(gen);
    uniform_int_distribution<int> FQY(1, M);
    uniform_int_distribution<int> FQX(1, N);
    int fx = FQX(gen);
    int qx = FQX(gen);
    int px = FQX(gen);
    int fy = FQY(gen);
    int qy = FQY(gen);
    int py = FQY(gen);
    int t = rano(gen);
    if (c <= 4)
    {
        t = 0;
    }
    fout << M << " " << N << "\n" << t << "\n";
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            int p = ranp(gen);
            if (i == fy && j == fx)
            {
                fout << "F ";
            }
            else if (i == qy && j == qx)
            {
                fout << "Q ";
            }
            else if (i == py && j == px)
            {
                fout << "P ";
            }
            else
            {
                if (c <= 7)
                {
                    p <= 7 ? fout << "O " : fout << "X ";
                }
                else
                {
                    p <= 2 ? fout << "O " : fout << "X ";
                }
            }
        }
        fout << "\n";
    }
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
//chmod +x deathbattle
//bash -c 'for i in {0..9}; do ./deathbattle < "input/input$i.txt" > "output/output$i.txt"; done'