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

Sorted array
last occ - first occ +1 = count of elemnets =in sorted array
*/
#include<iostream>
#include<vector>

using namespace std;

int last_occ(vector<int>&nums, int tgt){
  int last = -1;
  
  int start = 0;
  int end = nums.size()-1;
  
  while(start<=end){
    int mid = start + (end - start)/2;
    if(nums[mid] ==  tgt){
      last = mid;
      start = mid +1;}
    else if (nums[mid] > tgt){
      end = mid-1;
    }
    else
      start = mid +1;

    }
  return last;
}

int first_occ(vector<int>&nums, int tgt){
  int first = -1;
  
  int start = 0;
  int end = nums.size()-1;
  
  while(start<=end){
    int mid = start + (end - start)/2;
    if(nums[mid] ==  tgt){
      first = mid;
      end = mid -1;}
    else if (nums[mid] > tgt){
      end = mid-1;
    }
    else
      start = mid +1;

    }
  return first;
}

int count(vector<int>&nums, int tgt){
  int first = first_occ(nums, tgt);
  int last = last_occ(nums,tgt);
  if(first!= -1){
    int count = (last - first) + 1;
    return count;
  }
  else
    return 0;
}

int main(){
    vector<int> nums = {1,2,3,4,4,4,7,8,9,10};
    int tgt = 4;
    
    cout<<count(nums, tgt);
}

