class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int row = 0;
        int col = n - 1;
        if(matrix.size() == 0)
            return false;
                   //m < 3, n < 4 
        while(row >=0 && row<m && col >=0 && col<n){ //0 1 2
            cout<<row<<col<<endl;
            if(matrix[row][col] == target)
                return true;
            else if(matrix[row][col] > target)
                col--;
            else
                row++;
        }
        return false;
    }
};

/*

O(m+n)
start = matrix[0,0]
end = matrix[matrix.size()-1, matrix.size()-1]

while(start<=end){
    mid = st +ebd/2
    
    if()
    
}

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        if(matrix.size() == 0)
            return false;
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        int row = 0;
        int col = m-1;
        
        while(row < n && col >= 0)
        {
            if(matrix[row][col] == target)
                return true;
            else if(matrix[row][col] > target)
                col--;
            else
                row++;
        }
        return false;
    }
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    // check bad input
    int m = matrix.size();
    if(m == 0)
        return false;
    int n = matrix[0].size();
    if(n == 0)
        return false;
    
    // Binary search each row
    for(int i = 0; i < m; ++i)
    {
      vector<int>& row = matrix[i];
      int j = 0;
      int min = 0; int max = n-1;
      // iterative process
      while(max - min >= 0)
      {
        j = (max+min)/2;
        int value = row[j];
        if(value == target)
            return true;
        else if(value < target)
            // search right value
            min = j+1;
        else
            // search left values
            max = j-1;
        }
      }
    return false;
  }


*/
