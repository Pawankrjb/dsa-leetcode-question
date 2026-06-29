class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int>map;
        vector<int>ans;
        for(auto x:nums){
            map[x]++;
        }
        for(int i=1; i<=nums.size(); i++){
            if(map[i]==0){
            ans.push_back(i);
            }
        }
        return ans;
    }
};