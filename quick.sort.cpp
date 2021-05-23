/*It is one of the most efficient sorting algorithms and is based on the splitting of an array (partition) into smaller ones and swapping (exchange) based on the comparison with 'pivot' element selected. Due to this, quick sort is also called as "Partition Exchange" sort. Like Merge sort, Quick sort also falls into the category of divide and conquer approach of problem-solving methodology.



Taking the analogical view in perspective, consider a situation where one had to sort the papers bearing the names of the students, by name from A-Z. One might use the approach as follows:

Select any splitting value, say L. The splitting value is also known as Pivot.
Divide the stack of papers into two. A-L and M-Z. It is not necessary that the piles should be equal.
Repeat the above two steps with the A-L pile, splitting it into its significant two halves. And M-Z pile, split into its halves. The process is repeated until the piles are small enough to be sorted easily.
Ultimately, the smaller piles can be placed one on top of the other to produce a fully sorted and ordered set of papers.
The approach used here is reduction at each split to get to the single-element array.
At every split, the pile was divided and then the same approach was used for the smaller piles by using the method of recursion.
Technically, quick sort follows the below steps:
Step 1 − Make any element as pivot
Step 2 − Partition the array on the basis of pivot
Step 3 − Apply quick sort on left partition recursively
Step 4 − Apply quick sort on right partition recursively
*/


int Partition(vector<int> &arr, int low, int high){
//select rightmost elemnt
  
int pivot = arr[high], pivotIndex = low;
  
 for(int i = 0; i< high; i++){
  //comparison for swapping
   if(arr[i]<pivot){
    int temp = arr[i];
     arr[i] = pivot;
     pivot = temp;
     pivotIndex++;
   }
 }
  
  int temp = arr[high];
  arr[high] = arr[pivotIndex];
  arr[pivotIndex] = temp;
  
  
  return pivotIndex;        //this is the pivot for the next round of partition

}



vector<int> quickSort(vector<int> &arr, int start, int end){
  
  //int start = arr[0], end = arr.size()-1;
  if(start<end){
    int p = Partition(arr, start, end);
    quickSort(arr, start, (p-1));   //left partition recursive call
    quickSort(arr, (p+1), end)  //right partition recursive call

  }
  
 

}
