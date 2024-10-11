#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<pair<string,string>,pair<int,pair<int,int>>> p1, pair<pair<string,string>,pair<int,pair<int,int>>> p2)
{
    int p1time,p2time;
    p1time = (p1.second.second.second - p1.second.second.first) - p1.second.first;
    p2time = (p2.second.second.second - p2.second.second.first) - p2.second.first;
    return p1.second.second.first < p2.second.second.first;
    // return p1time < p2time;
}
int main()
{
    freopen("input.in", "r", stdin);
    freopen("output.in", "w", stdout);
    pair <pair<string,string>,pair<int,pair<int,int>>> data;
    vector <pair<pair<string,string>,pair<int,pair<int,int>>>> v;
    int n,time_start_int,time_end_int,averagetime = 0,ts,te,a = 1,b = 1;
    string time_start,time_end;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> data.first.first >> data.first.second >> data.second.first >> time_start >> time_end;
        time_start_int = ((((time_start[0] - '0')*10) + (time_start[1] - '0'))*60) + ((time_start[3] - '0')*10) + (time_start[4] - '0');
        time_end_int = ((((time_end[0] - '0')*10) + (time_end[1] - '0'))*60) + ((time_end[3] - '0')*10) + (time_end[4] - '0');
        data.second.second.first = time_start_int;
        data.second.second.second = time_end_int;
        data.second.first = data.second.first * 60;
        v.push_back(data);
    }
    sort(v.begin(),v.end(),cmp);
    cin >> averagetime;
    // cout << "--------------------\n";
    // for (int i = 0; i < n; i++)
    // {
    //     averagetime += (v.at(i).second.second.second - v.at(i).second.second.first) - v.at(i).second.first;
    // }
    // averagetime = averagetime / (2*n);
    v.at(0).second.second.second = v.at(0).second.second.first + v.at(0).second.first;
    for (int i = 1; i < n; i++)
    {
        ts = v.at(i).second.second.first + (averagetime * b);
        te = ts + v.at(i).second.first;
        if (ts >= v.at(i).second.second.first && te <= v.at(i).second.second.second)
        {
            v.at(i).second.second.first = ts;
            v.at(i).second.second.second = te;
        }
        else
        {
            v.at(i).second.second.first = v.at(i).second.second.second - v.at(i).second.first;
            b = 0;
        }
        b++;
    }
    for (int i = 0; i < n; i++)
    {
        int x1,y1,x2,y2;
        x1 = v.at(i).second.second.first / 60;
        y1 = v.at(i).second.second.first % 60;
        x2 = v.at(i).second.second.second / 60;
        y2 = v.at(i).second.second.second % 60;
        cout << v.at(i).first.first << " " << v.at(i).first.second << " ";
        if (x1 > 9)
        {
            cout << x1;
        }
        else
        {
            cout << 0 << x1;
        }
        cout << '.';
        if (y1 > 9)
        {
            cout << y1;
        }
        else
        {
            cout << 0 << y1;
        }
        cout << " ";

        if (x2 > 9)
        {
            cout << x2;
        }
        else
        {
            cout << 0 << x2;
        }
        cout << '.';
        if (y2 > 9)
        {
            cout << y2;
        }
        else
        {
            cout << 0 << y2;
        }
        cout << "\n";
    }
    // cout << "\n";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v.at(i).first.first << " " << v.at(i).first.second << " " << v.at(i).second.first << " " << v.at(i).second.second.first << " " << v.at(i).second.second.second;
    //     cout << "\n";
    // }
}