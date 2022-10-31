class Solution {
public:
    bool isPalindrome(string s) {
        int first = 0;
        int last = s.size() - 1;
        
        while(first < last){
            if(isalnum(s[first]) == 0){
                first++;
                continue;
            }
            if(isalnum(s[last]) == 0){
                last--;
                continue;
            }
            if(isupper(s[first])){
                s[first] = tolower(s[first]);
            }
            if(isupper(s[last])){
                s[last] = tolower(s[last]);
            }
            if(s[last] != s[first]){
                return false;
            }
            first++;
            last--;
        }
        return true;
    }
};