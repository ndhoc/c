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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        queue<TreeNode*> qp,qq;
        qp.push(p); qq.push(q);

        while(!qp.empty() && !qq.empty()){
            TreeNode* a = qp.front();
            qp.pop();
            TreeNode* b = qq.front();
            qq.pop();

            if(a == nullptr && b == nullptr) continue;
            if(a ==nullptr || b ==nullptr) return false;
            if(a->val != b->val) return false;

            qp.push(a->left); qp.push(a->right);
            qq.push(b->left); qq.push(b->right);
        }
        return true;
    }
};