---
title: BST Traversal
tags: BST-Traversal, inOrder, postOrder, preOrder
expertise: Beginner
firstSeen: 2022-10-19T05:00:00-04:00
---

Explain briefly what the snippet does.

- Given the root of the binary search tree, return the inOrder, preOrder, postOrder traversal of it's nodes values.
- Used standard LeetCode definition for tree node.

Definition of Binary Tree Node:

```cpp
// Definition for Binary Tree Node
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left  (left), right(right) {}
};
```

```cpp
class Solution {
public:
    vector<int> res;

    // inOrder traversal
    vector<int> inorderTraversal(TreeNode* root) {
        if(root==NULL){
            return res;
        }else{
            inorderTraversal(root->left);
            res.push_back(root->val);
            inorderTraversal(root->right);
        }
        return res;
    }

    // preOrder traversal
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==NULL){
            return res;
        }else{
            res.push_back(root->val);
            preorderTraversal(root->left);
            preorderTraversal(root->right);
        }
        return res;
    }

    // postOrder traversal
    vector<int> postorderTraversal(TreeNode* root) {
        if(root==NULL){
            return res;
        }else{
            postorderTraversal(root->left);
            postorderTraversal(root->right);
            res.push_back(root->val);
        }
        return res;
    }
};
```

```cpp
int main(){
    TreeNode *root;
    // root = [4, 2, 7, 1, 3]

    Solution Obj1;
    
    vector<int> inorder =  Obj1.inorderTraversal(root);
    // inorder = [1, 2, 3, 4, 7]

    vector<int> preorder =  Obj1.preorderTraversal(root);
    // preorder = [4, 2, 1, 3, 7]

    vector<int> postorder =  Obj1.postorderTraversal(root);
    // postorder = [, 3, 2, 4, 7]
}
```
