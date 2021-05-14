/*

class Node{
  public:
    int val;
    vector<Node*> children;
    
    Node(){}
    
    Node(int val,vector<Node*> children): val(val), children(children){}

};
  
  
  
  
  
  
  
  
  
  
*/



int maxDepth(Node* root){
    if (root == NULL){
      return 0;
    }
  
  int depth;
  depthcall(root,depth);

   return depth;
}

void depthcall(Node* root, int& depth){
  if(root == NULL)
      return;
  
  depth = depth + 1;
  
  for(int i = 0; i< root->children.size(); i++){
  depthcall(root->children[i],depth);
  }

}




