//**************Kadane' Algo*******************
//O(n)



class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int max_sum = nums[0];
        for(int i = 0; i<nums.size(); i++){
            sum = sum + nums[i];    //sum -2

            if(sum>max_sum){
                max_sum = sum;
            }
             if(sum<0){
                sum = 0;    //sum 0
            }
        }
        return max_sum; 
    }
};



// sum = 0 / 1 / 0 / 4 / 3 / 5 /6 / 1 /5
//     max_array = 6
