#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    //int n=arr.size();
    // int curr;
    // int res=0;
    // for(int i=0;i<n;i++)
    // {
    //     curr=arr[i];
    //     if(curr==x)
    //     res++;      
    //     for(int j=i+1;j<n;j++)
    //     {
    //         curr=curr^arr[j];   
    //         if(curr==x)
    //              res++;
    //     }
    // }
    // return res; //tc: O(n^2)

    map<int,int> mp;
    mp[0]=1;
    int preXor=0, count=0;
    for(int i=0;i<arr.size();i++){
        preXor^=arr[i];
        int remove=preXor^x;
        count+=mp[remove];
        mp[preXor]+=1;
    }
    return count;//tc: O(n)
}
