#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void klargest(vector<int> input, int n){
    sort(input.begin(),input.end() );
    for(int i = input.size()-1; i>=input.size()-n; i--){
        cout<<input[i]<<endl;
    }
}
int main()
{
    vector<int> input = {5,8,1,0};
    int n = 3;
    klargest(input,n);
    
}
