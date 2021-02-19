//Brute Force method check sliding window code for optimized solution

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prod2 = nums[0];
        for(int i = 0; i<nums.size(); i++){
                    
         int prod1 = 1;
            for(int j = i; j<nums.size(); j++){
                prod1 = prod1*nums[j];
                if (prod1 > prod2){
                    prod2 = prod1;
                }
            }
            // if (prod1 > prod2){
            //         prod2 = prod1;
            //     }
        }
        return prod2;
    }
};
