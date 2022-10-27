class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans = {1,2};
        if(numbers.size() == 2){
            return ans;
        }
        //num, index
        unordered_map<int, int> map;
        
        for(int i = 0; i < numbers.size(); i++){
            map[numbers[i]] = i;
        }
        for(int i = 0; i < numbers.size(); i++){
            int temp = target - numbers[i];
            if(map.find(temp) != map.end() && map[temp] != i){
                ans[0] = map[temp] + 1;
                ans[1] = i+1;
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};