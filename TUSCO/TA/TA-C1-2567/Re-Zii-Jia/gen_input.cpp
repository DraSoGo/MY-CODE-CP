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
    uniform_int_distribution<long long> ranXY1((-1e2), 1e2);
    uniform_int_distribution<long long> ranXY2((-1e12), 1e12);

    int n;
    if (c < 3)
    {
        n = ranN1(gen);
    }
    else
    {
        n = ranN2(gen);
    }
    fout << n << "\n";
    if (c < 6)
    {
        fout << ranXY1(gen) << " " << ranXY1(gen) << "\n";
    }
    else
    {
        fout << ranXY2(gen) << " " << ranXY2(gen) << "\n";
    }
    for (int i = 0; i < n; i++)
    {
        int idx = ranIDX(gen);
        if (c == 0 || c == 1 || c == 2)
        {
            if (idx > 2)
            {
                idx = 1;
            }
        }
        else
        {
            if (idx > 2)
            {
                idx = 2;
            }
        }
        fout << CM[idx];
        if (idx == 2)
            if (c <= 5)
            {
                fout << ' ' << ranXY1(gen) << " " << ranXY1(gen);
            }
            else
            {
                fout << ' ' << ranXY2(gen) << " " << ranXY2(gen);
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
//for i in {0..9}; do    ./Re_Zii_jia_1.exe < "input/input$i.txt" > "output/output$i.txt" & done