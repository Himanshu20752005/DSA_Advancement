class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {

    int sum = 0;
    int l = 0 ;
    int r = num.size()-1;

    vector<int> ans;
    while(l<r){
        if(num[l] + num[r] == target){
            ans.push_back(l+1);
            ans.push_back(r+1);
            return ans;
        }
        if(num[l] + num[r] > target) r--;

        if(num[l] + num[r] < target) l++;
    }
    return ans;
   }
};
