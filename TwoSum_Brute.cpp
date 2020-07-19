//O(n^2) BruteForce algorithm
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) { //first input is array and other target
        vector<int> arr(2);
        for(int i= 0; i< nums.size(); i++){
for(int j = i+1; j<nums.size(); j++){       //if j = 0 then will do itself or behind not ahead so we use i+1
    //if nums[i] + nums[j] = target
    if(nums[i] + nums[j] == target){
         arr[0] = i;
        arr[1] = j;
    }
    
}
            }
        return arr;
    }
};
