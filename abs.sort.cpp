#import <iostream>
#import <vector>
#import <algorithm>

using namespace std;

vector<int> absSort(const vector<int>& arr)
{ 
  vector<int> output;
  output = arr;
  sort(output.begin(), output.end(), [](int a, int b) {
    if(abs(a) != abs(b))
      return abs(a) < abs(b);
    return a < b;
  });
  return output;
}

int main() 
{
	return 0;
}
/*
[2, -7, -2, -2, 0]

-7 -2 -2 0 2
  
7 2 2 0 2
  
0 -(2) -(2) 2 -(7)
  
[2, -7, -2, -2, 0]

-7 -2 - 2 0 2

-(2) -(2) -(0) -(2) 7

0 2 2 2 -7

 iterate over arr i = 1
    abs(arr[i]) >= abs(arr[i-1])  
    if (arr[i] >= 0)  
     swap i-1 for i
       else 
         swap i for i-1
  
-9 7 0 -1 2 -2
  
-9 -2 -2 0 2 7
  
0 -2 -2 2 7 -9
  
*/
