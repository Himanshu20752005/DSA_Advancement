class Solution {
public:
    int longestCommonSubsequence(string t1, string t2) {
        int n = t1.length();
        int m = t2.length();
        
        // Create a 2D DP table initialized with -1 to indicate uncomputed states.
        // dp[i][j] will store the length of LCS of t1[0..i] and t2[0..j]
        vector<vector<int>> dp(n, vector<int>(m, -1));
        
        // Call the recursive function starting from the last indices of both strings
        return countLCS(t1, t2, n-1, m-1, dp);
    }

    int countLCS(string &t1, string &t2, int x, int y, vector<vector<int>> &dp){
        // Base Case: If either string is exhausted, LCS is 0
        if(x == -1 || y == -1) return 0;

        // If already computed, return the stored result to avoid recomputation (Memoization)
        if(dp[x][y] != -1) return dp[x][y];
        
        // If characters at current positions match, include them in LCS
        // Move diagonally in the matrix (i.e., reduce both x and y by 1)
        if(t1[x] == t2[y]){
            dp[x][y] = 1 + countLCS(t1, t2, x-1, y-1, dp);
        }
        // If characters don't match, find the maximum LCS by:
        // 1. Excluding current character of t1 (move x-1)
        // 2. Excluding current character of t2 (move y-1)
        else {
            dp[x][y] = max(countLCS(t1, t2, x-1, y, dp), countLCS(t1, t2, x, y-1, dp));
        }

        // Return the computed value for dp[x][y]
        return dp[x][y];
    }
};
