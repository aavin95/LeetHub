class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans = {0,1};
        if(nums.size() == 2){
            return ans;
        }
        //num, index
        unordered_map<int, int> map;
        
        for(int i = 0; i < nums.size(); i++){
            map[nums[i]] = i;
        }
        for(int i = 0; i < nums.size(); i++){
            int temp = target - nums[i];
            if(map.find(temp) != map.end() && map[temp] != i){
                ans[0] = i;
                ans[1] = map[temp];
            }
        }
        return ans;
    }
};