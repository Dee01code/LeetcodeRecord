/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    
public:
        
    TreeNode* null = new TreeNode(0);
    TreeNode* valNull = new TreeNode(-1);
​
    
    int lvlcnt(TreeNode* root){
        if(!root->left && !root->right) return 0;
        
        int left=0,right=0;
        if(root->left) left = lvlcnt(root->left);
        if(root->right) right = lvlcnt(root->right);
        
        return 1 + max(left,right);
    }
        
        
    bool solve(TreeNode* root, vector<vector<TreeNode*>> & ans, int lvl){
        
        queue<pair<TreeNode*,int>> q;
        q.push({root,0});
        q.push({null,-1}); 
        vector<TreeNode*> temp;
        while(!q.empty()){
            
            pair<TreeNode*,int> p = q.front();
            TreeNode* front = p.first;
            int curLvl = p.second;
            
            q.pop();
            
            if(front == null) continue;
            temp.push_back(front); 
            
            if(!front->left && front->right) return false;
            if(front->left && !front->right && curLvl+1 < lvl) return false;
            if(front->left) q.push({front->left,curLvl+1});
            else{
                if(curLvl != lvl) q.push({valNull,curLvl+1});
            } 
            
            if(front->right) q.push({front->right,curLvl+1});
            else {
                if(curLvl != lvl) q.push({valNull,curLvl+1});
            }
            
            
            if(q.front().first == null){
                ans.push_back(temp);
                temp.clear();
                q.push({null,-1}); 
            }
        }
        return 1;
    }
        
        
​
    
        bool isCompleteTree(TreeNode *root)
