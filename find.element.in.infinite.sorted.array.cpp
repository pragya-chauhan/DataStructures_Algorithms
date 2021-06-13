int binarySearch(vector<int>&nums, int tgt, int low, int high){
  
  while(low<=high){
    int mid = low + (high -low)/2;
    
    if(nums[mid]==tgt)
      return mid;
    else if(nums[mid]>tgt)
      end = mid -1;
    else if(nums[mid]<tgt)
      start = mid +1;
  
  
  }
  return -1;



}



int search(vector<int> &nums, int tgt){
  int high = 1;
    int low = 0;
  while(high<=tgt){
    low = high;
    high = high*2;
    
    binarySearch(nums, tgt, low, high)
  }


}
