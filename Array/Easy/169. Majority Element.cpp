class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int>counts;
        for(auto i:nums){
            counts[i]++;
        }
        int n = nums.size();
        for(auto i:counts){
            if(counts[i.first] > n/2){
                return i.first;
              
            }
        }
        return 0;
        
    }
};