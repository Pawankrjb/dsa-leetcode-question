class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         int n=nums.size();
    int total=nums[0];
    int ans=nums[0];
    for(int i=1; i<n; i++){
        total=std::max(total+nums[i],nums[i]);
        ans=std::max(ans,total);

     
    }
    return ans;

    }
};