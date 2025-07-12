#include<iostream>
#include<queue>
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
int sumAtk(TreeNode* root, int k){
    if(root== NULL) return -1;

    queue<TreeNode*> q;
    q.push(root);
    q.push(NULL);
    int level = 0;
    int sum = 0;

    while(!q.empty()){
        TreeNode* temp = q.front();
        q.pop();

        if(temp != NULL){
            if(level == k){
                sum += temp->data;
            }
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);

        }
        else if(!q.empty()){
            q.push(NULL);
            level++;
        }
    }
    return sum;
}

TreeNode* buildTreeLevelOrder(){
    int rootData;
    cout << "Enter the root value (-1 for NULL)";
    cin >> rootData;

    if(rootData == -1) return NULL;

    TreeNode* root = new TreeNode(rootData);
    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()){
        TreeNode* current = q.front();
        q.pop();

        int leftData, rightData;
        cout << "Enter left and right of " << current->data << " -1 for NULL";
        cin >> leftData >> rightData;

        if(leftData != -1){
            current->left = new TreeNode(leftData);
            q.push(current->left);
        }
        if(rightData != -1){
            current->right = new TreeNode(rightData);
            q.push(current->right);
        }
    }
    return root;
}

void leftView(TreeNode* root){
    if(root == NULL) return;

    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()){
        int levelSize = q.size();
        for(int i = 0; i < levelSize; i++){
            TreeNode* curr = q.front();
            q.pop();
            if(i  == 0) cout << curr->data << " ";
            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
        }
    }
}

void rightView(TreeNode* root){
    if(root == NULL) return;

    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()){
        int levelSize = q.size();
        for(int i = 0; i < levelSize; i++){
            TreeNode* curr = q.front();
            q.pop();
            if(i == levelSize - 1) cout << curr->data << " ";
            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
        }
    }
}

vector<int> zigzagTraversal(TreeNode* root){
    vector<int> result;

    if(root == NULL) return result;

    queue<TreeNode*> q;
    q.push(root);
    bool leftToRight = true;

    while(!q.empty()){
        int levelSize = q.size();
        vector<int> level(levelSize);

        for(int i = 0; i < levelSize; i++){
            TreeNode* node = q.front();
            q.pop();

            int index = leftToRight ? i : (levelSize - 1 - i);
            level[index] = node->data;

            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);

        }
        for(int i : level){
            result.push_back(i);
        }
        leftToRight = !leftToRight;
    }
    return result;
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
    buildTreeLevelOrder();

}