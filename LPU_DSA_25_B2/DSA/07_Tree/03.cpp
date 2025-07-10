#include<iostream>
using namespace std;

class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){
        data = val;
        left = right = NULL;
    }
};
 
 int countNodes(TreeNode* root){
    if(root == NULL) return 0;

    int lc = countNodes(root->left);
    int rc = countNodes(root->right);
    return lc + rc + 1;
    //or
    // return 1 + countNodes(root->left) +countNodes(root->right)
 }


 int countLeafNodes(TreeNode* root){
    if(root == NULL) return 0;
    if(!root->left && !root->right) return 1;

    return countLeafNodes(root->left) + countLeafNodes(root->right);

 }

 int sumOfNodes(TreeNode* root){
    if(root == NULL) return 0;

    return root->data + sumOfNodes(root->left) + sumOfNodes(root->right);
 }

 int height(TreeNode* root){
    if(root == NULL) return 0;

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    return max(leftHeight, rightHeight) + 1;

 }
int main()
{
    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
}