#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
    int compress(std::vector<char>& chars) {
        int ans = 0;   
        int occurance = 1; 
        string str;   

        for (int i = 0; i < chars.size(); i++) {
            
            if (i + 1 < chars.size() && chars[i] == chars[i + 1]) {
                occurance++;  
            } else {
                
                str.push_back(chars[i]);
                if (occurance > 1) {
                    str += to_string(occurance);  
                }
                occurance = 1;
            }
        }
        chars.clear();
        chars.insert(chars.end(), str.begin(), str.end());

        return chars.size();  
    }
};

