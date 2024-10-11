#include <bits/stdc++.h>
using namespace std;

void geninput(string in, int c)
{
    ofstream fout;
    fout.open(in);

    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<int> ranN0(1, 1e3);
    uniform_int_distribution<int> ranN1(1e5, 3e5);
    uniform_int_distribution<int> ranx(1, 1e3);
    int n;
    if (c < 6)
    {
        n = ranN0(gen);
        fout << n << "\n";
        for (int i = 0; i < n; i++)
        {
            fout << ranx(gen) << " ";
        }
    }
    else
    {
        n = ranN1(gen);
        fout << n << "\n";
        for (int i = 0; i < n; i++)
        {
            fout << i << " ";
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
//for i in {0..9}; do    ./Martial-Arts-On.exe < "input/input$i.txt" > "output/output$i.txt" & done