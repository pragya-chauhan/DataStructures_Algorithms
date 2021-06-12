/*find ceil concept used 
alpha_tgt ascii value of letter      
1 = a = tgt
c  f  j
[3,6,9,10,11]             1

return 3 = c

ceil of tgt in arry

Brute Force
ans
for(arr)
    if arr[i]>tgt
        ans  =arr[i]
        return ans
return arr[0]


BS 
[3,6,9,10,11]             10
    mid   
    
    if mid > tgt && mid -1 >tgt
        end = mid -1
    if mid > tgt && mid -1 < tgt
        return mid
    if mid < tgt 
        start = mid+1
*/


class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
            char result = letters[0];
    int start = 0;
    int end = letters.size()-1;
    while(start<=end){
        int mid = start +(end - start)/2;
    if (letters[mid] > target ){
         end = mid -1;
        result = letters[mid];
    }
    else
        start = mid+1;

    }
            return result;
    }
};
