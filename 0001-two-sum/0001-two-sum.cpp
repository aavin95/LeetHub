class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans = {0,1};
        if(nums.size() == 2){
            return ans;
        }
        
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    ans[0] = i;
                    ans[1] = j;
                }
            }
        }
        return ans;
    }
};