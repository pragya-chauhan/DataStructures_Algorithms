//if array is unsorted comp = O(n)
int freq(vector<int> & nums, int tgt){
  int count = 0;
  for(int i = 0; i<nums.size(); i++){
    if (nums[i] == tgt)
      count++;      
  }
  return count;
}

//if array is sorted
// 1 2 3 3 5 tgt 2
/*
  1 3 3 3 4 5     tgt = 2
  if(mid > tgt)
    end = mid-1
    
   if(mid < tgt)
   start = mid+1
   
   if mid == tgt
   return mid

1 1 1
1 1 1
1 9 1

*/
int freq(vector<int>&nums, int tgt){
  



}

