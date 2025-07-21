
// https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1
// class Solution {
//   public:
//     // Function to return Breadth First Traversal of given graph.
//     vector<int> bfs(vector<vector<int>> &adj) {
        
//         int V = adj.size();
//         vector<int> bfsResult;
//         vector<bool> visited(V, false);
//         queue<int> q;
        
//         q.push(0);
//         visited[0] = true;
        
//         while(!q.empty()){
//             int temp = q.front();
//             q.pop();
//             bfsResult.push_back(temp);
            
//             //visit all unvisited neighbours
            
//             for(auto neighbour : adj[temp]){
//             if(!visited[neighbour]){
//                 q.push(neighbour);
//                 visited[neighbour] = true;
//             }
//             }
//         }
//         return bfsResult;
        
        
//     }
// };


// ------------------------
// https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1

// class Solution {
//   public:
  
//   void dfsHelper(int node,vector<vector<int>>& adj, vector<bool> &visited, vector<int> & result){
//       visited[node] = true;
//       result.push_back(node);
      
//       //visit all unvisited neighbpurs
//       for(int neighbour : adj[node]){
//           if(!visited[neighbour]){
//               dfsHelper(neighbour, adj, visited, result);
//           }
//       }
//   }
//     vector<int> dfs(vector<vector<int>>& adj) {
        
//         int V = adj.size();
//         vector<bool> visited(V, false);
//         vector<int> result;
        
//         dfsHelper(0, adj, visited, result);
//         return result;
        
//     }
// };