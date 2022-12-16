class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, vector<int>> map;
        vector<int> n;
        for(int i = 0; i < nums.size(); i++){
            map[nums[i]].push_back(i);
            if(target - nums[i] == nums[i]){
                if(map[nums[i]].size() == 2){
                    n.push_back(map[nums[i]][0]);
                    n.push_back(map[nums[i]][1]);
                    return n;
                }
            }
            else if(map.find(target - nums[i]) != map.end() ){
                int hold = map[target - nums[i]][0];
                n.push_back(hold);
                n.push_back(i);
                return n;
            }
        }
        return n;
    }
};
