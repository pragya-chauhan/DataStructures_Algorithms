/*
  12, 1234, 45, 67, 1
  
*/

#include <iostream>
#include<vector>

using namespace std;
int max(vector<int> &arr){
  int max_no = arr[0];
  for(int i = 0; i<arr.size(); i++){
    if(arr[i] > max_no){
      max_no = arr[i];
    }
  }
  return max_no;
}

int min(vector<int> &arr){
  int min_no = arr[0];
  for(int i = 0; i<arr.size() ; i++){
    if(arr[i]< min_no){
      min_no = arr[i];
    }
  }
  return min_no;

}
int main()
{
    
    
    
    vector<int> arr = { 12, 1234, 45, 67, 1 };
    
    cout<<min(arr)<<endl;
    cout<<max(arr)<<endl;
    printf("Hello World");

    return 0;
}

