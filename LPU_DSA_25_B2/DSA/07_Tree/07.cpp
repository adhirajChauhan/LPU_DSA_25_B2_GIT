// https://www.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-binary-tree/1

// /* A binary tree node

// struct Node
// {
//     int data;
//     struct Node* left;
//     struct Node* right;

//     Node(int x){
//         data = x;
//         left = right = NULL;
//     }
// };
//  */

// class Solution {
//   public:
//     // Function to return the lowest common ancestor in a Binary Tree.
//     Node* lca(Node* root, int n1, int n2) {
//         if(root==NULL) return NULL;
        
//         if(root->data == n1 || root->data == n2) return root;
        
//         Node* leftAns = lca(root->left,n1, n2);
//         Node* rightAns = lca(root->right, n1,n2);
        
//         if(leftAns != NULL && rightAns != NULL){
//             return root;
//         }
//         else if(leftAns != NULL && rightANs == NULL){
//             return leftANs;;
//         }
//         else if(leftAns == NULL && rightAns !+ NULL){
//             return rightANs;
//         }
//         else{
//             return NULL;
//         }
        
//     }
// };

// //------------------------


// https://www.geeksforgeeks.org/problems/k-sum-paths/1

// /*
// struct Node {
//     int data;
//     Node *left;
//     Node *right;

//     Node(int val) {
//         data = val;
//         left = right = NULL;
//     }
// };
// */
// class Solution {
//   public:
  
//   void solve(Node* root, int k, int &count, vector<int> &path){
//       if(root==NULL) return;
      
//       path.push_back(root->data);
      
//       solve(root->left, k, count, path);
//       solve(root->right, k, count, path);
      
//       //Check all sub-paths ending at this node for sum == k
//         int sum = 0;
//         for(int i = path.size() - 1; i >= 0; i--){
//             sum += path[i];
//             if(sum == k) count++;
//         }
        
//         path.pop_back();
//   }
//     int sumK(Node *root, int k) {
//         vector<int> path;
//         int count = 0;
//         solve(root, k, count, path);
//         return count;
        
//     }
// };

// //---------------------------
// https://leetcode.com/problems/search-in-a-binary-search-tree/
// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     TreeNode* searchBST(TreeNode* root, int val) {
//         if(root == NULL || root-> val == val){
//             return root;
//         }

//         if(val < root -> val){
//             return searchBST(root->left, val);
//         }
//         else{
//             return searchBST(root->right, val);
//         }
//     }
// };


// //----------------------

// https://leetcode.com/problems/insert-into-a-binary-search-tree/

// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     TreeNode* insertIntoBST(TreeNode* root, int val) {
//         if(root ==  NULL){
//             return new TreeNode(val);
//         }

//         //if value is less than current node -> go left
//         if(val < root->val) root->left = insertIntoBST(root->left, val);

//         //if value is greater -> go right
//         else root->right = insertIntoBST(root->right, val);
//         // return 
//         return root;

//     }
// };

// https://leetcode.com/problems/validate-binary-search-tree/submissions/1697432206/

// //----------------------


// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:

//     bool isValid(TreeNode* root, long minVal, long maxValue){
//         if(root == NULL) return true;

//         if(root -> val <= minVal || root->val >= maxValue) return false;

//         bool leftValid = isValid(root->left, minVal, root->val);
//         bool  rightValid = isValid(root->right, root->val, maxValue);

//         return leftValid && rightValid;
//     }
//     bool isValidBST(TreeNode* root) {
//         return isValid(root, LONG_MIN, LONG_MAX);
//     }
// };
