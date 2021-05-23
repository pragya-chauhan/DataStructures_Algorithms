#include <iostream>
#include <vector>

using namespace std;

int findBusiestPeriod( const vector<vector<int> >& data ) 
{
  int people = 0;
  int time;
  for(int i = 0; i< data.size(); i++){
    for(int j = 0;j<3; j++){
  
        if(a[2]==1){
        people += data[i][1];
        time = a[0];
        }
        else {
      people -= data[i][1];
          time = a[0];
        }
    }
    
    
  }
}

int main() {
  return 0;
}
/*
iterate data
  
  iterate one entry
    a[0] == b[0]
      if entry
      people = a[1]

      if exit
      people = people- a[1]
      
    
    return time
    
    */
