#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {60, 100, 120};
    vector<int> wt = {10, 20, 30};
    int capacity = 50;
    multiset<pair<double, pair<int, int>>, greater<>> ms;
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        ms.insert({(v[i] * 1.0) / (wt[i] * 1.0), {v[i], wt[i]}});
    }

    for (auto p : ms)
    {
        cout << p.first * 1.0 << " " << p.second.first << " " << p.second.second << endl;
    }

    double ans = 0;
    for (auto p : ms)
    {
        if (p.second.second <= capacity)
        {
            ans += p.second.first;
            capacity -= p.second.second;
        }
        else
        {
            ans += ((p.second.first * 1.0) / (p.second.second * 1.0)) * capacity;
            capacity = 0;
            break;
        }
    }
    // only two digits after decimal
    cout << fixed << setprecision(2);
    cout << "Result : " << ans << endl;
    return 0;
}
