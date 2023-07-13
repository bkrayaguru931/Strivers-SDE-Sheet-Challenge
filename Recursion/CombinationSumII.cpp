#include <bits/stdc++.h>
void func(int idx,int t,vector<int>&arr,int n,vector<int>&temp,vector<vector<int>>&ans){
    if(t==0){
        ans.push_back(temp);
        return ;
    }
    for(int i=idx;i<n;i++){
        if(i>idx && arr[i]==arr[i-1]){
            continue;
        }
        if(arr[i]>t){
            break;
        }
        temp.push_back(arr[i]);
        func(i+1,t-arr[i],arr,n,temp,ans);
        temp.pop_back();
    }
}
vector<vector<int>> combinationSum2(vector<int> &arr, int n, int t)
{
	sort(arr.begin(),arr.end());
    vector<vector<int>>ans;
    vector<int>temp;
    func(0,t,arr,n,temp,ans);
    return ans;
}
