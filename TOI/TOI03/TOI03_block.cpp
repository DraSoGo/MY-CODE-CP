#include <bits/stdc++.h>
using namespace std;
main()
{
    int x,y,n,px,py,score = 0;
    cin >> y >> x;
    char GAME[y][x],rl,ch;
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cin >> GAME[i][j];
        }
    }
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> py >> px >> rl;
        if (rl == 'L')
        {
            if (GAME[py][px - 1] == '-' && GAME[py][px] != '-' && GAME[py][px] != '#' && px != 0)
            {
                ch = GAME[py][px];
                GAME[py][px] = '-';
                while (GAME[py][px - 1] == '-')
                {
                    py++;
                }
                GAME[py - 1][px - 1] = ch;
                py--;
                px--;
                if (GAME[py + 1][px] == ch)
                {
                    GAME[py + 1][px] = '-';
                    GAME[py][px] = '-';
                    score = score + 5;
                }
                if (GAME[py][px + 1] == ch)
                {
                    GAME[py][px + 1] = '-';
                    GAME[py][px] = '-';
                    score = score + 5;
                }
                if (GAME[py][px - 1] == ch)
                {
                    GAME[py][px - 1] = '-';
                    GAME[py][px] = '-';
                    score = score + 5;
                }
                if (GAME[py][px] == '-')
                {
                    score = score + 5;
                }
            }
            else
            {
                score = score - 5;
            }
        }
        else if (rl == 'R')
        {
            if (GAME[py][px + 1] == '-' && GAME[py][px] != '-' && GAME[py][px] != '#' && px != x - 1)
            {
                ch = GAME[py][px];
                GAME[py][px] = '-';
                while (GAME[py][px + 1] == '-')
                {
                    py++;
                }
                GAME[py - 1][px + 1] = ch;
                py--;
                px++;
                if (GAME[py + 1][px] == ch)
                {
                    GAME[py + 1][px] = '-';
                    GAME[py][px] = '-';
                    score = score + 5;
                }
                if (GAME[py][px + 1] == ch)
                {
                    GAME[py][px + 1] = '-';
                    GAME[py][px] = '-';
                    score = score + 5;
                }
                if (GAME[py][px - 1] == ch)
                {
                    GAME[py][px - 1] = '-';
                    GAME[py][px] = '-';
                    score = score + 5;
                }
                if (GAME[py][px] == '-')
                {
                    score = score + 5;
                }     
            }
            else
            {
                score = score - 5;
            }
        }
        for (int i = y; i >= 0; i--)
        {
            for (int j = 0; j < x; j++)
            {
                if (GAME[i + 1][j] == '-' && GAME[i][j] != '#' && GAME[i][j] != '-')
                {
                    ch = GAME[i][j];
                    GAME[i][j] = '-';
                    GAME[i + 1][j] = ch;
                }
                
            }
        }
        for (int i = 0; i < y; i++)
        {
            for (int j = 0; j < x; j++)
            {
                if (GAME[i][j] != '-' && GAME[i][j] != '#')
                {
                    ch = GAME[i][j];
                    if (GAME[i + 1][j] == ch)
                    {
                        GAME[i + 1][j] = '-';
                        GAME[i][j] = '-';
                        score = score + 5;
                    }
                    if (GAME[i][j + 1] == ch)
                    {
                        GAME[i][j + 1] = '-';
                        GAME[i][j] = '-';
                        score = score + 5;
                    }
                    if (GAME[i][j - 1] == ch)
                    {
                        GAME[i][j - 1] = '-';
                        GAME[i][j] = '-';
                        score = score + 5;
                    }
                    if (GAME[i][j] == '-')
                    {
                        score = score + 5;
                    }
                }
                
            }
        }
    }
    cout << score << "\n";
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cout << GAME[i][j] << " ";
        }
        cout << "\n";
    }
}