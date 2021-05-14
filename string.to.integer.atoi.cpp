/*
  ip = string 
  op = int
  
  const = length and lowercase/uppercase/special char/digits
          ignore whitespace
          sign
          if word ignore
          out of range
          first seq non numeric and non whitespace
          
  ex = 

*/





class Solution {
public:
    int myAtoi(string s) {
        if(s.empty())
          return 0;
      int len = s.length(), i = 0, sign = 1;
      
      while(i<len && s[i] == ' '){
        i++;
      }
      
      if (i == 0)
        return 0;
      
      if(s[i] == '-'){
        i++;
        sign = 0;
      }
      
      else if(s[i] == '+'){
        i++;
      }
      
      long int out = 0;
      
      while(s[i]>='0' && s[i]<='9'){
        out = out*10;
        if(out <= INT_MIN || out >= INT_MAX)
            break;
        out = out + (s[i] - '0');
        i++;
      }
      
      if (sign == 0)
        out = out*(-1);
      
      if(out <= INT_MIN)
          return INT_MIN;
      
      if(out >= INE_MAX)
        return INT_MAX;
      
      return (int)out;
      
    }
};
