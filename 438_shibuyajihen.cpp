#include <iostream>
using namespace std;
int main()
{
    int n,y;
    cin >> n;
    int x = ((2*n-1)*5) + (1*7);
    for (int i = 0; i < 2*n-1; i++)
    {
        y = 0;
        for (int j = 0; j < x; j++)
        {
            if (j < 2*n - 1 && (j == 0 || j ==  2*n-2 || j == i))
            {
                cout << "#";
            }
            else if (j == 2*n )
            {
                cout << "#";
            }
            else if ((j > 2*n + 2 && j < (2*n+3)+(2*n-1)-1) && (i == 0 || (i == n-1 && j != (2*n+3)+(2*n-1)-2) || (i == 2*n-2 && j != (2*n+3)+(2*n-1)-2)))
            {
                cout << "#";
            }
            else if (((j == 2*n + 2 && i > 0 && i < n - 1) || (i == 2*n-2 && j == 2*n + 2)) || (j == (2*n+1)+(2*n-1) && i > n-1 && i < 2*n - 2))
            {
                cout << "#";
            }
            else if ((j > (2*n-1)*2+3 && j < (2*n-1)*2+3 + (2*n-1)) && ((i == 0 && j != (2*n-1)*2+4) || (i == n-1 && j != (2*n-1)*2+4) || (i == 2*n-2 && j != ((2*n+3)+(2*n-1)+2) + (2*n-1)-1)))
            {
                cout << "#";
            }
            else if (((j == (2*n-1)*2+4 && i > 0 && i < n - 1) || (i == 2*n-2 && j == 2*n + 3)) || (j == (2*n-1)*2+3 + (2*n-1) && ((i > n-1 && i < 2*n - 2) || i == 0)))
            {
                cout << "#";
            }
            else if ((j == (2*n - 1)*3 + 5 || j == (2*n - 1)*3 + 5 + (2*n - 2)) && i!= 0)
            {
                cout << "#";
            }
            else if ((j > (2*n - 1)*3 + 5 && j < (2*n - 1)*3 + 5 + (2*n - 2)) && i == n-1)
            {
                cout << "#";
            }
            else if ((j > (2*n - 1)*3 + 5 && j < (2*n - 1)*3 + 5 + (2*n - 2)) && i == 0)
            {
                cout << "#";
                //x++;
            }
            else if ((j > (2*n - 1)*4 + 5) && ((j == (2*n - 1)*4 + 6) || j == x-2 || y == i))
            {
                cout << "#";
            }
            else
            {
                cout << " ";
            }
            if ((j > (2*n - 1)*4 + 5))
            {
                y++;
            }
        }
        cout << "\n";
    }
}