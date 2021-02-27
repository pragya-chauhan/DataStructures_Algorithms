class Solution {
public:
    bool isValid(string s) {
        stack<char> my_stk;
        char x;
        for(int i =0; i<s.length(); i++){
            if(s[i] == '['|| s[i] == '(' || s[i] == '{'){
                my_stk.push(s[i]);
            }
            
            else{
                if(my_stk.empty()){
                    return false;
                }
                x = my_stk.top();
                my_stk.pop();
               if(x == '[' && s[i] == ']') {
                   continue;
               }
                else if(x == '{' && s[i] == '}'){
                    continue;
                }
                else if(x == '(' && s[i] == ')'){
                    continue;
                }
                else{
                    return false;
                }
            }
        }
        if(my_stk.empty())
        return true;
        else{
            return false;
        }
    }
};


