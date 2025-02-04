class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int> ump;
        for(char c : s){
            ump[c]++;
        }

        int n = s.size();

        int odd_max = INT_MIN;
        int even_min = INT_MAX;

        for(auto i = ump.begin() ; i!=ump.end() ;i++){ //could uas a for each loop 
            int freq = i->second;        //for accessing the vale in ump
            if(freq%2 == 0 && freq<even_min){
                even_min = freq;
                continue;
            }

            if(freq%2 != 0 && freq>odd_max){
                odd_max = freq;
                continue;
            }
        }

        int ans = odd_max - even_min;
        return ans;
    }
};
