class Solution {
public:
    bool isPalindrome(string s) {
    bool skip;
    std::string::iterator first=s.begin();
    std::string::iterator last=s.end()-1;
    while(first < last){
        skip = false;
        if(!isalnum(*first)){
            first++;
            skip = true;
        }
        if(!isalnum(*last)){
            last--;asd
            skip = true;
        }
        if(skip){
            continue;
        }
        if(tolower(*first) != tolower(*last)){
            return false;
        }
        ++first;
        --last;
    }
    return true;
    }
};
