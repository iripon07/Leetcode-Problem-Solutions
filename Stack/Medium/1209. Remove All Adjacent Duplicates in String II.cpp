class Solution {
public:
    string removeDuplicates(string s, int k) {

        stack<pair<char, int>>st;
        int n = s.size();

        for( int i=0; i<n; i++){
            if(st.empty() || st.top().first != s[i]){
                st.push({s[i], 1});
            }
            else{
                st.top().second++;
            }
            if(st.top().second == k){
                st.pop();
            }
        }

        string ans ="";
        while(!st.empty()){
            pair<char, int> p = st.top();
            st.pop();
            while(p.second--){
                ans += p.first;
            }
        }
reverse(ans.begin(), ans.end());
        return ans;
    }
};