class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        unordered_map<char, int> map;

        for(int i = 0; i < s.size(); i++){
            ++map[s[i]];
        }
        for(int i = 0; i < t.size(); i++){
            if(map.find(t[i]) == map.end()){
                return false;
            }
            --map[t[i]];
        }
        for(int i = 0; i < s.size(); i++){
            if(map[s[i]] != 0){
                return false;
            }
        }
        return true;
    }
};