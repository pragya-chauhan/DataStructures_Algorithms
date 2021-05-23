#include <iostream>
#include <vector>

using namespace std;

int indexEqualsValueSearch(const vector<int> &arr) 
{
  int l = 0; int r = arr.size()-1;
  
  while(l < r){
    int mid = (l+r)/2;
    
    if(arr[mid] == mid)
      return mid;
    
    else if(arr[mid] < mid){
      l = mid+1;
    }
    
    else
      r = mid -1;
  }
  
  return -1;
}

int main() {
  return 0;
}
