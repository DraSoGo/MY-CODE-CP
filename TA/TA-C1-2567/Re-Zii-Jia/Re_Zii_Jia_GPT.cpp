#include <bits/stdc++.h>
using namespace std;

struct Action
{
    string type;
    int dx, dy;
};

int main()
{
    int N;
    cin >> N;

    int a, b;
    cin >> a >> b;

    int x = a, y = b;
    stack<Action> actionStack;
    stack<Action> undoStack;

    for (int i = 0; i < N; ++i)
    {
        string cmd;
        cin >> cmd;

        if (cmd == "MV")
        {
            int dx, dy;
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
    cout << x << " " << y << endl;

    return 0;
}
