class Solution {
    
bool search(vector<vector<char>>& board, int i, int j, int count, string& word ){
  if(count == word.length())
    return true;
  if(i<0|| j< 0 || i== board.size()|| j ==board[0].size() || board[i][j] != word[count])
    return false;

  bool found = false;
  char temp = board[i][j];
  board[i][j] = '*';

  found = ( search(board, i-1, j, count+1,  word  )|| search(board, i+1, j, count+1,  word) ||search(board, i, j-1, count+1,  word)|| search(board, i, j+1, count+1,  word));
  board[i][j] = temp;

return found;
}
public:
    bool exist(vector<vector<char>>& board, string word) {
         if( board.size() == 0 || board[0].size() == 0 )
    return false;
  for(int i = 0 ; i<board.size(); i++){
    for(int j = 0; j< board[0].size();j++){
      if (board[i][j] == word[0] && search(board, i, j , 0 , word))

        return true;
    }

  }

  return false;
    
    }
};
