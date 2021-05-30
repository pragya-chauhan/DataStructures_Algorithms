/*The deletion distance of two strings is the minimum number of characters you need to delete in the two strings in order to get the same string. For instance, the deletion distance between "heat" and "hit" is 3:

By deleting 'e' and 'a' in "heat", and 'i' in "hit", we get the string "ht" in both cases.
We cannot get the same string from both strings by deleting 2 letters or fewer.
Given the strings str1 and str2, write an efficient function deletionDistance that returns the deletion distance between them. Explain how your function works, and analyze its time and space complexities.

Examples:

input:  str1 = "dog", str2 = "frog"
output: 3

input:  str1 = "some", str2 = "some"
output: 0

input:  str1 = "some", str2 = "thing"
output: 9

input:  str1 = "", str2 = ""
output: 0

failed case
Input:
 
"ab", "ba"
Expected:2
Actual: 0

*/





class Solution {
public:
    int minDistance(string word1, string word2) {
         int m = word1.length(); //5
      int n = word2.length(); //3

        vector<vector<int>> memo(m+1, vector<int>(n+1, 0)); //6,4
      
      for(int i = 1; i<= m; i++){
        for(int j = 1; j<=n; j++){
          if(word1[i-1] == word2[j-1])
            memo[i][j] =memo[i-1][j-1] + 1;
          else
            memo[i][j] = max(memo[i-1][j], memo[i][j-1]);
        
        }
      }
      return (m + n - 2*memo[m][n]);
        
    }
};
