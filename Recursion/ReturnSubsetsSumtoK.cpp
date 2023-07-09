#include <bits/stdc++.h>
// vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
// {
    // Write your code here.

    //iterative
    // vector<vector<int>> res;
    // vector<int> v;
    // queue<pair<int, vector<int>>> q;
    // q.push({0, v});
    // while (!q.empty()) {
    //     int i = q.front().first;
    //     v = q.front().second;
    //     q.pop();

    //     if (i==n) {
    //         int sum = accumulate(v.begin(), v.end(), 0);
    //         if (sum==k) {
    //             res.push_back(v);
    //         }
    //         continue;
    //     }
    //     // include current element
    //     v.push_back(arr[i]);
    //     q.push({i + 1, v});
    //     // exclude current element
    //     v.pop_back();
    //     q.push({i + 1, v});
    // }
    // return res;
    
// }

 //recursive
void sol(vector<int> arr,int n, int k, vector<vector<int>> &res, vector<int> &v,int i){
    if(i==n){
        if(k==0){
            res.push_back(v);
        }
        return;
    }
    v.push_back(arr[i]);
    sol(arr, n, k-arr[i], res, v, i+1);
    v.pop_back();
    sol(arr, n, k, res, v, i+1);
}
vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    int i = 0;
    vector<vector<int>> res;
    vector<int> v;
    sol(i, arr, n, k, res, v);
    return res;
}
