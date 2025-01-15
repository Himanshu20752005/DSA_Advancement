class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
           int n = nums.size();
        vector<bool> f(n+1,false);

        for(int num: nums){
            f[num] = true;
        }

        for(int i = 1 ;i<=nums.size() ;i++){
            if(!f[i] ){
                ans.push_back(i);
            }
        }

        return ans;
    }

};
