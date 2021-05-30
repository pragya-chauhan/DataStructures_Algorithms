/*https://www.youtube.com/watch?v=sSno9rV8Rhg
  Recursion time = O(2^n) space = O(1)
  Recursion with memoization time = O(mxn) space = O(mn)
  DP time = O(mn) space = O(mn)
https://www.youtube.com/watch?v=NF_GC7-mjlQ&t=0s

*/






class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
     int m = text1.length();
      int n = text2.length();

        vector<vector<int>> memo(m+1, vectorin<int>(n+1, 0));
      
      for(int i = 1; i<= m; i++){
        for(int j = 1; j<=n; j++){
          if(text1[i-1] == text2[j-1])
            memo[i][j] =memo[i-1][j-1] + 1;
          else
            memo[i][j] = max(memo[i-1][j], memo[i][j-1]);
        
        }
      }
      return memo[m][n];
        
    }
};

/*class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        
        int n = text1.size();
        int m = text2.size();
        
        if(n == 0 || m == 0)
            return 0;
        
        vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                if(text1[i-1] == text2[j-1])
                    dp[i][j] = dp[i-1][j-1]+1;
                else
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        
        return dp[n][m];
    }
};*/
