#include <bits/stdc++.h> 
vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    // Write your code here.
     vector<int>res;
    vector<vector<int>>v(start.size());
    for(int i=0;i<v.size();i++) {
        v[i]={end[i],i+1,start[i]};
    }
    sort(v.begin(),v.end());
    int finish=v[0][0];
    res.push_back(v[0][1]);
    for(int i=1;i<v.size();i++) {
        if(v[i][2]>finish) {
            finish=v[i][0];
            res.push_back(v[i][1]);
        }
    }
    return res;
}
