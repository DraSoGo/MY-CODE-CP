#include <bits/stdc++.h>
using namespace std;
double x[101];
map<double, double> y;
int main()
{
    ios_base ::sync_with_stdio(0);cin.tie(0);
    int p,sum = 0;
    cin >> p;
    while (p--)
    {
        double delta[5];
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
        }

        double meanD = 0;
        double mx = -1e9, mn = 1e9;
        for (int i = 0; i < n; i++)
        {
            double m;
            cin >> m;
            meanD += m;
            y[x[i]] = m;
        }
        meanD /= n;
        double mxDelta = -1e9;
        for (int i = 0; i < n; i++)
        {
            mxDelta = max(mxDelta, abs(y[x[i]] - meanD) / y[x[i]]);
        }

        delta[0] = mxDelta;

        for (int i = 1; i <= 4; i++)
        {

            double meanA = 0, meanC = 0, cnt = 0;

            for (int j = 0; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    double tmp = pow(x[j], i) - pow(x[k], i);
                    if (tmp == 0)
                        continue;
                    double a = double(y[x[j]] - y[x[k]]) / tmp;
                    double c = y[x[j]] - a * pow(x[j], i);
                    meanA += a;
                    meanC += c;
                    cnt++;
                }
            }

            meanA /= cnt;
            meanC /= cnt;
            mxDelta = -1e9;
            for (int j = 0; j < n; j++)
            {
                mxDelta = max(mxDelta, abs(y[x[j]] - meanA * pow(x[j], i) - meanC) / y[x[j]]);
            }
            delta[i] = mxDelta;
        }

        mn = 1e9;
        double idx;
        for (int i = 0; i <= 4; i++)
        {
            if (mn > delta[i])
            {
                mn = delta[i];
                idx = i;
            }
        }
        sum += idx;
    }
    cout << sum;
    

    return 0;
}