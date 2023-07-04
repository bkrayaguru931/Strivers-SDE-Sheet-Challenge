class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // unordered_map<int, int> m;       
        // for(auto x: nums){
        //     m[x]++;
        // }
        // for(auto x: m){
        //     if(x.second == 1){
        //         return x.first;
        //     }
        // }
        // return -1;

        int a = 0,b = 0;
        for(auto x:nums){
            a=(a^x) & ~b;
            b=(b^x)& ~a;
        }
        return a;
    }
};

