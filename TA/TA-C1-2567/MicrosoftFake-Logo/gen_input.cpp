#include <bits/stdc++.h>
using namespace std;

void geninput(string in, int c)
{
    ofstream fout;
    fout.open(in);

    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<int> ranN0(5, 10);
    uniform_int_distribution<int> ranN1(5, 1e2);
    uniform_int_distribution<int> ranN2(5, 1e3);
    int n;
    if (c < 2)
    {
        n = ranN0(gen);
    }
    else if (c < 5)
    {
        n = ranN1(gen);
    }
    else
    {
        n = ranN2(gen);
    }
    
    if (n % 2 == 0)
    {
        n--;
    }
    fout << n;
}

int main()
{
    for (int i = 0; i <= 9; i++)
    {
        geninput("./input/input" + to_string(i) + ".txt", i);
    }
    return 0;
}
//for i in {0..9}; do    ./MicrosoftFake_Logo.exe < "input/input$i.txt" > "output/output$i.txt" & done