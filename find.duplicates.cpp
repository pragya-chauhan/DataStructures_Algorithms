/*  ip = vector<int>, size int n
    op = void print
    const 1 - n
    
    cases
    
    null array = return 0
    only 1 = return 0
    multiple duplicates then print all
    
    example 
    3 3 2 1 2 =     BF          comp =  O(nlogn) space O(n)
            sorting
            go thrugh array 
            check each element if i == i-1
            push in array that elemet
            run until the end of the array 
    1 2 3 4 3
            
            
            Efficient
            
            save elements in dictinary and key as the count
            print more than 1
            
    
    
*/

void duplicates(vector<int> &arr, int n){
    set<int> ans;
    sort(arr);                  //my formula does not work without sorting
    for(int i = 1; i<n; i++){
      if(arr[i] == arr[i-1]){
        ans.insert(arr[i]);           //same number if contained thrice will be printed twice
      }
     
    }
  for(auto it: ans){
  cout<<it<<endl;
  }

}


