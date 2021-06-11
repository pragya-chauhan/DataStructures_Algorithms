int reverseBinary(vector<int> input, int tgt){
  int start = 0;
  int end = ;nums.size()-1;
  
  while(start<=end){
    int mid = start+ (end - start)/2;
    
    if(input[mid] == tgt)
      return mid;
    else if(input[mid] > tgt)
      start = mid +1;
      else
        end = mid -1;
  
  
  }
  return -1;
// 9 8 7 6 5
}
