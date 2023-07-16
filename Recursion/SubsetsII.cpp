#include <bits/stdc++.h> 
void help(int idx, vector<int> &arr, int n, vector<vector<int>> &res, vector<int> &v){
    res.push_back(v);
    for(int i = idx; i < n; i++){
        if(i != idx && arr[i] == arr[i-1])
        continue;
        v.push_back(arr[i]);
        help(i+1, arr, n, res, v);
        v.pop_back();
    }
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    int idx = 0;
    vector<vector<int>> res;
    sort(arr.begin(),arr.end());
    vector<int> v;
    help(idx, arr, n, res, v);
    return res;
}
