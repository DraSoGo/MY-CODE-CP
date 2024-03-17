#include <bits/stdc++.h>
using namespace std;
int grad(int sum)
{
    if(sum >= 90 && sum <= 100)
    {
        cout << "Enter score : " << sum << "\n" << "Your grade = ";
        cout << "4";
    }
    else if(sum >= 80 && sum <= 89)
    {
        cout << "Enter score : " << sum << "\n" << "Your grade = ";
        cout << "3";
    }
    else if(sum >= 70 && sum <= 79)
    {
        cout << "Enter score : " << sum << "\n" << "Your grade = ";
        cout << "2";
    }
    else if(sum >= 60 && sum <= 69)
    {
        cout << "Enter score : " << sum << "\n" << "Your grade = ";
        cout << "1";
    }
    else if(sum >= 0 && sum <= 59)
    {
        cout << "Enter score : " << sum << "\n" << "Your grade = ";
        cout << "0";
    }
}
main()
{
    int score;
    cout << "Enter score : ";
    cin >> score;
    grad(score);
}