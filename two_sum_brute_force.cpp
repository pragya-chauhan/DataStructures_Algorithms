class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int curr_sum = 0;
        vector<int> res;
        for(int i =0; i<nums.size(); i++){
            for(int j = i+1; j<nums.size(); j++){
                curr_sum = nums[i]+nums[j];
                if (curr_sum == target){
                    res.push_back(i);
                    res.push_back(j);
                }
            }
            
        }return res;
    }
};
