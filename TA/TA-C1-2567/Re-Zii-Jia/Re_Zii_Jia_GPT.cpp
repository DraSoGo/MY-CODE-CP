#include <iostream>
#include <stack>
#include <cmath>
#include <iomanip>
using namespace std;

struct Action
{
    string type;
    double dx, dy;
};

int main()
{
    double N;
    cin >> N;

    double a, b;
    cin >> a >> b;

    double x = a, y = b;
    stack<Action> actionStack;
    stack<Action> undoStack;

    for (double i = 0; i < N; ++i)
    {
        string cmd;
        cin >> cmd;

        if (cmd == "MV")
        {
            double dx, dy;
            cin >> dx >> dy;
            x += dx;
            y += dy;
            actionStack.push({"MV", dx, dy});
        }
        else if (cmd == "RE")
        {
            bool foundMV = false;
            while (!actionStack.empty())
            {
                Action lastAction = actionStack.top();
                actionStack.pop();
                if (lastAction.type == "MV")
                {
                    x -= lastAction.dx;
                    y -= lastAction.dy;
                    actionStack.push({"RE", lastAction.dx, lastAction.dy});
                    foundMV = true;
                    break;
                }
            }
            if (!foundMV)
            {
                actionStack.push({"RE", 0, 0});
            }
        }
        else if (cmd == "REE")
        {
            bool foundRE = false;
            while (!actionStack.empty())
            {
                Action lastAction = actionStack.top();
                actionStack.pop();
                if (lastAction.type == "RE")
                {
                    if (!actionStack.empty() && actionStack.top().type == "RE")
                    {
                        x = a;
                        y = b;
                    }
                    else
                    {
                        x += lastAction.dx;
                        y += lastAction.dy;
                    }
                    actionStack.push({"REE", 0, 0});
                    foundRE = true;
                    break;
                }
            }
            if (!foundRE)
            {
                x = a;
                y = b;
                actionStack.push({"REE", 0, 0});
            }
        }
    }

    double distance = sqrt((x - a) * (x - a) + (y - b) * (y - b));
    cout << fixed << setprecision(2) << distance << endl;
    cout << fixed << setprecision(0) << x << " " << y << endl;

    return 0;
}
