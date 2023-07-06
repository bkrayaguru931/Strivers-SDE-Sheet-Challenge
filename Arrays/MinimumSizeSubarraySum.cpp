class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0, j=0;
        int res=INT_MAX;
        int sum=0;
        while(j<nums.size()){
            sum+=nums[j];
            while(sum>=target){
                res=min(j-i+1,res);
                sum=sum-nums[i];
                i++;
            }
            j++;
        }
        return res==INT_MAX? 0:res;
    }
};
