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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> output;
        vector<TreeNode*> parents(1, root);
        if (root == NULL) {
            return output;
        }

        while(parents.size() != 0) {
            vector<int> parent_vals;
            vector<TreeNode*> children;
            for (TreeNode* p : parents) {
                parent_vals.push_back(p->val);
                if (p->left != NULL) {
                    children.push_back(p->left);
                }
                if (p->right != NULL) {
                    children.push_back(p->right);
                }
            }
            output.push_back(parent_vals);
            parents = children;
        }

        return output;
    }
};
