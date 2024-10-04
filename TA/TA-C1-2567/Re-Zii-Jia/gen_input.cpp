#include <bits/stdc++.h>
using namespace std;

void geninput(string in, int c)
{
    ofstream fout;
    fout.open(in);

    random_device rd;
    mt19937 gen(rd());

    string CM[3] = {"RE", "REE", "MV"};

    uniform_int_distribution<int> ranN1(1, 1e3);
    uniform_int_distribution<int> ranN2(1, 1e5);
    uniform_int_distribution<int> ranIDX(0, 4);
    uniform_int_distribution<long long> ranXY((-1e7), 1e7);

    int n;
    if (c <= 3)
    {
        n = ranN1(gen);
    }
    else
    {
        n = ranN2(gen);
    }
    fout << n << "\n";
    fout << ranXY(gen) << " " << ranXY(gen) << "\n";
    for (int i = 0; i < n; i++)
    {
        int idx = ranIDX(gen);
        if (idx > 2)
        {
            idx = 2;
        }
        fout << CM[idx];
        if (idx == 2)
            fout << ' ' << ranXY(gen) << " " << ranXY(gen);
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