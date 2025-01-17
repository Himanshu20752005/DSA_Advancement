
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return 0;
        sort(nums.begin() , nums.end());
        int max = INT_MIN;
        for(int i = 0 ;i<n-1 ;i++){
          int gap = abs(nums[i] - nums[i+1]);
          if(gap > max){
            max = gap;
          }
        }
        return max;
    }
};
