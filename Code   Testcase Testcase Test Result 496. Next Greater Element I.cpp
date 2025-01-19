class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int mx = 0;
        vector<int> ans;
        for(int i =  0 ;i <nums1.size() ;i++){
            // stack<int> ans;
            for(int j = 0 ; j<nums2.size() ;j++){
                if(nums1[i] == nums2[j]){
                    mx= nums2[j];
                   for(int k = j+1 ; k<nums2.size() ;k++){
                    if(nums2[k] > nums2[j]){
                        mx = nums2[k];
                        break;
                    }
                   }
                   if(mx == nums2[j]){
                    ans.push_back(-1);
                   }else{
                    ans.push_back(mx);
                   }
                }
            }
        }
        return ans;
    }
};
