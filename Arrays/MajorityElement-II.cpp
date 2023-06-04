#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    vector<int> res;
    unordered_map<int,int> mp;
    for(int i=0;i<arr.size();i++){
        mp[arr[i]]++;
    }
    int target_count=floor(arr.size()/3);
    for(auto i:mp){
        if(i.second>target_count)
        res.push_back(i.first);
    }
    return res;

} //TC: O(n), SC: O(n)
