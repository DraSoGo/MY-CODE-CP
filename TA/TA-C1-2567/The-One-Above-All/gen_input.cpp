#include <bits/stdc++.h>
using namespace std;

const long long n = (1000000);
bitset <n> B;
void geninput(string in, long long c)
{
    ofstream fout;
    fout.open(in);

    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<long long> ranN0(2, 10);
    uniform_int_distribution<long long> ranN1(11, 100);
    uniform_int_distribution<long long> ranN2(11, 1000);
    uniform_int_distribution<long long> ranN3(1000000, 2000000);
    long long ranK0 = 2;
    uniform_int_distribution<long long> ranK1(2, 50);
    uniform_int_distribution<long long> ranK2(2, 100);
    uniform_int_distribution<long long> ranK3(2, 1000);
    uniform_int_distribution<long long> ranM0(2, 15);
    uniform_int_distribution<long long> ranM1(2, 15);
    uniform_int_distribution<long long> ranM2(100, 70000);
    uniform_int_distribution<long long> ranM3(75000, 78000);
    vector <long long> A;
    A.emplace_back(2);
    for (long long i = 3; i < n; i+=2)
    {
        if (B[i] == 0)
        {
            A.emplace_back(i);
            for (long long j = i*i; j < n; j+=i*2)
            {
                B[j] = 1;
            }
        }
    }
    cout << A.size()-1;
    if (c <= 2)
    {
        long long n = ranN0(gen);
        fout << n << " " << ranK0 << "\n";
        for (long long i = 0; i < n; i++)
        {
            fout << ranM0(gen) << " ";
        }
    }
    else if (c <= 4)
    {
        long long n = ranN1(gen);
        fout << n << " " << ranK1(gen) << "\n";
        for (long long i = 0; i < n; i++)
        {
            fout << ranM1(gen) << " ";
        }
    }
    else if (c <= 6)
    {
        long long n = ranN2(gen);
        fout << n << " " << ranK2(gen) << "\n";
        for (long long i = 0; i < n; i++)
        {
            fout << A[ranM2(gen)] << " ";
        }
    }
    else
    {
        long long n = ranN3(gen);
        fout << n << " " << ranK3(gen) << "\n";
        for (long long i = 0; i < n; i++)
        {
            fout << A[ranM3(gen)] << " ";
        }
    }
}

int main()
{
    for (long long i = 0; i <= 9; i++)
    {
        if (i >= 7)
        {
            geninput("./input/input" + to_string(i) + ".txt", i);
        }
        
    }
    return 0;
}
//for i in {0..9}; do    ./The-One-Above-All.exe < "input/input$i.txt" > "output/output$i.txt" & done