class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string token="";
        string str="";
        while(ss>>token)
        {
            reverse(token.begin(),token.end());
            str+=token+" ";
        }
        return str.substr(0,str.size()-1);
    }
};
