// https://www.geeksforgeeks.org/problems/is-binary-tree-heap/1

// // Structure of node
// /*class Node {
//    public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int val) {
//         data = val;
//         left = right = NULL;
//     }
// };*/

// class Solution {
//     public:
    
//       int countNodes(Node* root){
//           if(root==NULL) return 0;
//           return 1 + countNodes(root->left) + countNodes(root->right);
//       }
    
//       bool isCBT(Node* root, int index, int cnt){
//           if(root==NULL) return true;
          
//           if(index >= cnt){
//               return false;
//           }
          
//           else{
//               bool left = isCBT(root->left, 2 * index + 1, cnt);
//               bool right = isCBT(root->right, 2 * index + 2, cnt);
              
//               return (left && right);
              
//           }
//       }
      
//       bool isMaxOrder(Node* root){
//           if(root->left == NULL && root->right == NULL) return true;
          
//           if(root->right == NULL) return (root->data > root->left->data);
          
//           else{
//               bool left = isMaxOrder(root->left);
//               bool right = isMaxOrder(root->right);
              
//               return(left && right && (root->data > root->left->data && root->data > root->right->data));
//           }
          
          
//       }
      
//       bool isHeap(Node* tree) {
          
//           int index = 0;
//           int totalCount = countNodes(tree);
          
//           if(isCBT(tree, index, totalCount) && isMaxOrder(tree)){
//               return true;
//           }else{
//               false;
//           }
          
//       }
//   };