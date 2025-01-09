class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n == 1){
            return true;
        }else{
            for(int i = 0 ;i<50 ;i++){
                long long power = pow(4,i);

                if(power == n){
                    return true;
                }

                if(power > n){
                    return false;
                }
            }
        }
        return false;
    }
};
