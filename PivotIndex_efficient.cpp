//time = O(n)
//mem = O(n)

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> temp1;
                vector<int> temp2;
        int leftsum = 0;
        int rightsum = 0;
        for(int i = 0;i<nums.size(); i++){
             leftsum = leftsum + nums[i];
            temp1.push_back(leftsum);
        }
        for(int j = nums.size()-1; j>=0;j-- ){
             rightsum = rightsum + nums[j];
            temp2.push_back(rightsum);
        }
        reverse(temp2.begin(),temp2.end());
        for(int k = 0; k<nums.size(); k++){
           if ( temp1[k] == temp2[k] )
               
               return k;
        }
        return -1;
    }
};
