class Solution {
public:
    void reverseString(vector<char>& s) {
        int end = s.size()-1, temp;
        for(int i=0; i<end; i++){
            temp=s[i];
            s[i]=s[end];
            s[end]=temp;
            end--;
        }
    }
};