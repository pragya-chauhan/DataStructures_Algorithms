/*
max 2 children
15 10 20 8 25

          15
     10       20
   8   12   16   25  

ans 15 10 8
*/
vector<int> leftmost(Node* root){
            if(root == null){
                   return {};
            }
            vector<int> ans;
            solution(root, &ans);

}


void solution(Node* root, vector<int>& ans){
        if (root==null){
          return;
        }
        ans.push_back(root->value);
        solution(root->left,ans);

}



