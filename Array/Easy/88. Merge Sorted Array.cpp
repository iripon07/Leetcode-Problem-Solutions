class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int i=0, j=0, k=0;
       vector<int>v;
       while(i<m && j<n){
           if(nums1[i] > nums2[j]){
               v.push_back(nums2[j]);
               j++;
               k++;

           }else{
               v.push_back(nums1[i]);
               i++;
               k++;

           }
           
       }
       while(i<m){
           v.push_back(nums1[i]);
               i++;
       }
        
         while(j<n){
           v.push_back(nums2[j]);
               j++;
       }
       nums1=v;
    }
};