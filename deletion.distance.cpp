/*The deletion distance of two strings is the minimum number of characters you need to delete in the two strings in order to get the same string. For instance, the deletion distance between "heat" and "hit" is 3:

By deleting 'e' and 'a' in "heat", and 'i' in "hit", we get the string "ht" in both cases.
We cannot get the same string from both strings by deleting 2 letters or fewer.
Given the strings str1 and str2, write an efficient function deletionDistance that returns the deletion distance between them. Explain how your function works, and analyze its time and space complexities.

Examples:

input:  str1 = "dog", str2 = "frog"
output: 3

input:  str1 = "some", str2 = "some"
output: 0

input:  str1 = "some", str2 = "thing"
output: 9

input:  str1 = "", str2 = ""
output: 0*/





#include <iostream>
#include <string>
#include <map>

using namespace std;

int deletionDistance( const string& str1, const string& str2 ) 
{
  map<char, int> dict;
  int edit_dist = 0;
  for (int i = 0; i< str1.length(); i++)
  {
   dict[str1[i]]++; //a b
                    //1 1
    
  }
  
 for(int j = 0; j<str2.length(); j++)     //dfrog
 {
   if(dict.find(str2[j]) == dict.end())     //
   {
     edit_dist++;       //ed = 
      //if 0 then erase
   }
   else{
          dict[str2[j]]--;  //decrease by 1
     if(dict[str2[j]] == 0)     //d = 1
       dict.erase(str2[j]); 
   }
 }
  if(dict.empty())    //edit 2 left d
    return edit_dist;
  else {
    return (edit_dist + dict.size());   //3
  }


}

int main() {
  cout << deletionDistance("some","osme");
  return 0;
}

