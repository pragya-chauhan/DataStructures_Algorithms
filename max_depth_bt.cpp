/*
List all scenarios of what a binary tree could be like:

when a binary tree is null, simply return maximum depth as 0
when a binary tree just have a root node, return maximum depth as 1
when a binary tree has a root node and child nodes, maximum depth would be the depth of the bigger side between left and right subtrees plus 1. */


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        int leftMax, rightMax, finalMax = 0;
        if (root == NULL){
            return 0;
        }
        else {
            leftMax=maxDepth(root->left);  
            rightMax=maxDepth(root->right);
                if (rightMax > leftMax){
                    finalMax=rightMax+1;
                }
                else{
                    finalMax=leftMax+1;
                 }
        }
        return finalMax;
    }
            
    
};

// 1
//     2
// --------------------    
//    3
// 9    20
//     15  7
