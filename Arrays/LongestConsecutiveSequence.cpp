#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    // sort(arr.begin(),arr.end());
    // int len=1;
    // int maxLen=1;
    // for(int i=1;i<n;i++){
    //     if(arr[i]==arr[i-1]+1)
    //     len++;
    //     else if(arr[i]==arr[i-1])
    //     continue;
    //     else {
    //       maxLen = max(maxLen, len);
    //       len = 1;
    //     }
    // }
    // maxLen = max(maxLen, len);
    // return maxLen;//tc: O(nlogn)


    int maxLen=0;
    unordered_set<int> st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    for(auto it: st){
        if(st.find(it-1)==st.end()){
            int temp=it;
            int count=1;
            while(st.find(temp+1)!=st.end()){
            temp++;
            count++;
        }
        maxLen=max(maxLen,count);
        }           
    }
    return maxLen;//tc: O(n)

}
