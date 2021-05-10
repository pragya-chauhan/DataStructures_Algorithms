class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max1 = 0;
        int max2 = 0;
        int ans = 0;
        for(int i = 0; i< nums.size(); i++){
            if (nums[i] >= max1){
                max2 = max1;
                max1 = nums[i];
                ans = i;
                
            }
            
            else if( max2 < nums[i]){
                max2 = nums[i];
            }
       
        }
        cout<<max1<<" "<<max2;
        if(max1 >= 2*max2){
            return ans;
        }
        else
            return -1;
    }
};


/*
    ip = & nums
    op = int  .....index i or -1
    constraints= 
    
    nums = [3,6,1,0]
    out = 1 
    
    forst find largest = 6
    6,12,2,0
    
    nums = [1,2,3,4]
    larg = 4
    6
    
    go through nums
    see fi first elemtn greatest
        if curr>=max1
            max2 = max1
            max1 = curr
            ans = i
        else if (curr > max2)
            max2 = nums[i]
            
    if(max1 >  max 2){
        return ans
    }
    retunr -1
            
            
            
            
    
*/
