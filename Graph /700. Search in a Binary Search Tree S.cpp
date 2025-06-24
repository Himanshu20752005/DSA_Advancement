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
    TreeNode* searchBST(TreeNode* root, int val) {
        struct TreeNode * ptr;
        ptr = root;
        if(ptr == NULL) return NULL;
        if(ptr->val == val) return ptr;
        if(ptr->val > val){
            return searchBST(ptr->left , val);
        }

        if(ptr->val < val){
            return searchBST(ptr->right , val);
        }
        return NULL;
    }
};
