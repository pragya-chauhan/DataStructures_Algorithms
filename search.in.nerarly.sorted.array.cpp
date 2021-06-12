
int binarySearch(int nums[], int l, int r, int target)
{
 int start = l;
  int end = r;
  
  while(start<=end){
  
    int mid = start +(end-start)/2;
    
    if(nums[mid] == target)
    return mid;
    
    if(mid-1>=start && nums[mid-1] ==target )
      return mid-1;
    if(mid+1<=end && nums[mid+1]==target)
      return mid+1;
    
     if(target>nums[mid +1])
      start = mid +2;
    else 
      end = mid-2;
  }
  return -1;
}
