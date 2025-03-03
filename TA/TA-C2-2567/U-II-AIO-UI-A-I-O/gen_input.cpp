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

    uniform_int_distribution<int> ranT(1, 1e5);
    uniform_int_distribution<int> rani1(1, 5);
    uniform_int_distribution<int> rani2(20, 50);
    unsigned long long T = ranT(gen);
    if (c < 3)
    {
        fout << T << "\n";
        for (int i = 0; i < T; i++)
        {
            unsigned long long n = rani1(gen);
            uniform_int_distribution<unsigned long long> ranx1(1, S[n+1]);
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
            uniform_int_distribution<unsigned long long> ranx2(S[n-2], S[n]);
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
    for (int i = 0; i <= 9; i++)
    {
        geninput("./input/input" + to_string(i) + ".txt", i);
    }
    return 0;
}
//for i in {0..9}; do    ./uiiaiouiaio < "input/input$i.txt" > "output/output$i.txt" & done
//bash -c 'for i in {0..9}; do ./uiiaiouiaio < "input/input$i.txt" > "output/output$i.txt"; done'
//chmod +x uiiaiouiaio