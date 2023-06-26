#include <algorithm>

int maximumActivities(vector<int> &start, vector<int> &finish) {
    // Write your code here.
    vector<pair<int, int>> vp;
    int n=start.size();
    for (int i=0; i<n; i++)
        vp.push_back({finish[i], start[i]});
    sort(vp.begin(), vp.end());
    int cnt=1;
    int endLim=vp[0].first;
    for (int i=1; i<n; i++) {
        int s=vp[i].second;
        int e=vp[i].first;
        if (s>=endLim) {
        cnt++;
        endLim=e;
        }
    }
    return cnt;
}
