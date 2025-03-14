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

    uniform_int_distribution<int> ranMN(1, 1e1);
    uniform_int_distribution<int> rano(1, 5e3);
    uniform_int_distribution<int> ranol(1, 10);
    uniform_int_distribution<int> ranq(1, 30);
    if (c < 2)
    {
        int M = ranMN(gen);
        int N = ranMN(gen);
        int o = ranol(gen);
        fout << M << " " << N << "\n" << o << "\n";
        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < N; j++)
            {
                fout << ranq(gen) << " ";
            }
            fout << "\n";
        }
    }
    else
    {
        int M = ranMN(gen);
        int N = ranMN(gen);
        int o = rano(gen);
        fout << M << " " << N << "\n" << o << "\n";
        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < N; j++)
            {
                fout << ranq(gen) << " ";
            }
            fout << "\n";
        }
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
//for i in {0..9}; do    ./woilium < "input/input$i.txt" > "output/output$i.txt" & done
//chmod +x woilium
//bash -c 'for i in {0..9}; do ./woilium < "input/input$i.txt" > "output/output$i.txt"; done'