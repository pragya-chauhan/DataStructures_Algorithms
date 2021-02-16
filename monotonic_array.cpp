class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        bool result = true;
        bool res_inc = true;
        bool res_dec = true;
        int count_inc = 0;
        int count_dec = 0;
        for (int i = 0; i< A.size()- 1; i++){
            if (A[i] <= A[i+1]){
                res_inc = true;
                count_inc++;
            }
            if (A[i] >= A[i+1]){
            res_dec =  true;
                count_dec++;
        }

        }
        if ((res_inc ==true && count_inc == A.size()-1)|| (res_dec ==true && count_dec == A.size()-1)){
            result = true;
        }
        else{
            result = false;
        }
        return result;
            }
};


    
    
    
