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

// alternative method 

    //     int sum  = 0 ;
    //     int I , J;
    //     vector<int> ans;
    //     for(int i = 0 ;i<num.size() ;i++){
    //         if(num[i] > target) continue;

    //         for(int j = i+1; j<num.size() ;j++){
    //             sum = num[i] + num[j];

    //             if(sum == target){
    //               I = i;
    //               J=j;
    //             } 
    //         }
    //             if(sum == target) break;
    //     }

    //     ans.push_back(I+1);
    //     ans.push_back(J+1);
          
    //     return ans;
