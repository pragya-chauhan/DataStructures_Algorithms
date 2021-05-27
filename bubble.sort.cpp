/*This is used to identify whether the list is already sorted. When the list is already sorted (which is the best-case scenario), the complexity of bubble sort is only O(n).
In real life, bubble sort can be visualised when people in a queue wanting to be standing in a height wise sorted manner swap their positions among themselves until everyone is standing based on increasing order of heights.

iterate through arr
  iterate through arr
  arr[i] < arr[i-1]
  swap i and i-1
  
return arr
   time = O(n^2)
   space = O(1)



*/


vector<int> bubbleSort(vector<int> arr)
{
  int temp = 0;
  for(int i = 0; i<arr.size(); i++){
      bool swapped = false;
    for(int j = 1; j<arr.size(); j++){
      if(arr[j] < arr[j-1]){
       temp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = temp;
        swapped = true;
        
      }
      if(!swapped)
        break;
    }
    
  }
  return arr;


}
