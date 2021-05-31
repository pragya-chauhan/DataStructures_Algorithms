/*
arr[] = { 3, 5, 2, 4, 9, 3, 1, 7, 3, 11, 12, 3} 
x = 3 
k = 3 
Output : Yes 

no of seg = size arr/ k         //not equal seg

iterate over smalller seg to search target

if all true then return true

*/

bool findxinkindowSize(int arr[], int x, int k, int n)
{
    int i;
    for (i = 0; i < n; i = i + k) {
 
        // Search x in segment starting
        // from index i.
        int j;
        for (j = 0; j < k; j++){
          if(j+k < n){
            if (arr[i + j] == x)
                break;
          }
          else 
            return false;
        // If loop didn't break
        if (j == k)
           return false;
        }
    }
  return true;
}
 




