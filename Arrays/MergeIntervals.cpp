#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.

    sort(intervals.begin(),intervals.end());
    vector<vector<int>> res;
    res.push_back(intervals[0]);
    int k=1;
    for(int i=1;i<intervals.size();i++){
        if(intervals[i][0]<=res[k-1][1]){
            res[k-1][1]=max(res[k-1][1],intervals[i][1]);
        }
        else {
            res.push_back(intervals[i]);
            k++;
        }
    }
    return res;


}

