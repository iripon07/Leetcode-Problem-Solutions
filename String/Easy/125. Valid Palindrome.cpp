class Solution {
public:
    bool isPalindrome(string s) {
        if(s.length() == 0){
            return true;
        }
        vector<int>v;
        for(auto ch:s){
            if(isalnum(ch)){
                v.push_back(tolower(ch));
            }
        }
        
        int start = 0;
        int end = v.size()-1;
        
        while(start < end){
            if(v[start] != v[end]){
                return false;
            }
            start++;
            end--;
        }
        
        return true;
    }
};