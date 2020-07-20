// Map O(n) 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) { //first input is array and other target
        vector<int> arr(2);
        //2(0) 7(1) 11(2) 15(3)
        map<int, int> myMap;
        
        for(int i = 0; i< nums.size(); i++)
            myMap [nums[i]] = i;        //nums[0] = 0 ie. 2 is value stored key is 0
        
        for(int i = 0; i< nums.size(); i++){
        int temp = target - nums[i];
            if(myMap[temp] && myMap[temp] != i){
            arr[0]  = i; 
            arr[1] = myMap[temp];}
        //key checked through value
        } return arr;
    }
};
