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

void preorder(TreeNode* root){
    // root | left | right
    if(root == NULL) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);

}

void inorder(TreeNode* root){
    //left | root | right
       if(root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
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

    // preorder(root);
    inorder(root);
}