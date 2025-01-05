class Solution {
public:
    //rewritten
    int maxArea(vector<int>& h) {
        int l = 0;
        int r = h.size() - 1;
        int max = 0;
        while(r>l){
            int m1 = min(h[l] , h[r]);
            int vol = m1*(r-l);
            if(vol > max){
                max = vol;
            }

            if(h[l]>h[r]){
                r--;
            }else{
                l++;
            }
        }

        return max;

    }
};


