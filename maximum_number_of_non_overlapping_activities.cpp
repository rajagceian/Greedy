#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second; // Sort by end time
}

int main() {
    vector<pair<int, int>> activities = {{1, 3}, {2, 4}, {3, 5}, {0, 6}, {5, 9}, {5, 7}};
    
    sort(activities.begin(), activities.end(), compare);
    
    int count = 1;
    int lastEnd = activities[0].second;
    
    for (int i = 1; i < activities.size(); ++i) {
        if (activities[i].first >= lastEnd) {
            count++;
            lastEnd = activities[i].second;
        }
    }
    
    cout << "Max number of activities: " << count << endl;
    return 0;
}
