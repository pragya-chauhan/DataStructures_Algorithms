class Solution {
public:
    void reverseString(vector<char>& s) {
        for(int i =0; i<s.size()/2; i++){
            char curr = s[i];
            s[i] = s[s.size()-i-1];
            s[s.size()-i-1] = curr;
        }
    }
};



/*
void reverse(vector<char> & s){
    reverse(s.begin(), s.end());
    for(int i = 0; i<s.size()/2; i++){
        char curr = s[i];
    swap(s[i], s[s.size()-1-i]);
    
    }



}



*/


