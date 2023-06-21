#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) {
     sort(arr.begin(),arr.end());
  for(int i=0;i<n-3;i++){

      for(int j=i+1;j<n-2;j++){

          int left=j+1;

          int right=n-1;

          while(left<right){

              int sum=arr[i]+arr[j]+arr[left]+arr[right];

              if(sum==target){

                  return "Yes";

              }

              else if(sum<target){

                  left++;

              }

              else{

                  right--;

              }

          }

      }

  }

  return "No";

    vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            if(i>0 && nums[i]==nums[i-1])
                continue;
            for(int j=i+1;j<n;j++)
            {
                if(j>i+1 && nums[j]==nums[j-1])
                    continue;
                int k=j+1;
                int l=n-1;
                while(k<l)
                {
                    long long sum = nums[i];
                    sum += nums[j];
                    sum += nums[k];
                    sum += nums[l];
                    if(sum == target)
                    {
                        vector<int> temp={nums[i],nums[j],nums[k],nums[l]};
                        res.push_back(temp);
                        k++;
                        l--;
                        while(k<l && nums[k]==nums[k-1]) k++;
                        while(k<l && nums[l]==nums[l+1]) l--;
                    }
                    else if (sum > target)
                        l--;
                    else
                        k++;
                    
                }
            }
        }
        if(res.size()==0)
        return "No";
        else 
        return "Yes";
}
