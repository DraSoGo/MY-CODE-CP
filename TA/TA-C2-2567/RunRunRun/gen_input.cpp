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

    uniform_int_distribution<long long> ranA(1, 2e4);
    uniform_int_distribution<long long> ranC(1, 1e8);
    uniform_int_distribution<long long> ranD(1, 1e4);
    long long a = ranA(gen);
    long long b = ranC(gen);
    long long d = ranD(gen);
    if (c <= 3)
    {
        fout << a << " " << b;
    }
    else
    {
        fout << a << " " << a*d;
    }
    
}

int main()
{
    for (int i = 0; i <= 9; i++)
    {
        geninput("./input/input" + to_string(i) + ".in", i);
    }
    return 0;
}
//chmod +x RunRunRun
//bash -c 'for i in {0..9}; do ./RunRunRun < "input/input$i.in" > "output/output$i.out"; done'
//for i in {0..9}; do    ./RunRunRun < "input/input$i.txt" > "output/output$i.txt" & done