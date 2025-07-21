class Solution {
public:
    int longestCommonSubsequence(string t1, string t2) {
        int n = t1.length();
        int m = t2.length();
        
        // Create DP table initialized with -1
        vector<vector<int>> dp(n, vector<int>(m, -1));
        
        return countLCS(t1, t2, n-1, m-1, dp);
    }

    int countLCS(string &t1, string &t2, int x, int y, vector<vector<int>> &dp){
        if(x == -1 || y == -1) return 0;

        if(dp[x][y] != -1) return dp[x][y];
        
        if(t1[x] == t2[y]){
            return dp[x][y] = 1 + countLCS(t1, t2, x-1, y-1, dp);
        } else {
            return dp[x][y] = max(countLCS(t1, t2, x-1, y, dp), countLCS(t1, t2, x, y-1, dp));
        }
    }
};
