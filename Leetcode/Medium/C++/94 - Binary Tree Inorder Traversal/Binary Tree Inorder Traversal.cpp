#include <iostream>
#include <string>
#include <vector>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    std::vector<int> inorder = {};
    std::vector<int> inorderTraversal(TreeNode* root) {
        if(root != NULL){
            inorderTraversal(root->left);
            inorder.push_back(root->val);
            inorderTraversal(root->right);
        }
        return inorder;
    }
};

int main(){
    Solution solution = Solution();

    TreeNode n0 = TreeNode(1);
    TreeNode n1 = TreeNode(2);
    TreeNode n2 = TreeNode(3);
    n0.right = &n1;
    n1.left = &n2;

    solution.inorderTraversal(&n0);
    return 0;
}