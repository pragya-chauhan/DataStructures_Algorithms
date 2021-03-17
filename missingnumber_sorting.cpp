//Sorting

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int missing = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=i){
                missing = i;
                
            }
        }
        return missing; 
    }
};

/* [0 1 3]
i = 0 1 2
   [0 1 2 3]
i = 0 1 2 3
*/
