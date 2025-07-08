





// https://www.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1
// class Solution {
//   public:
//     queue<int> reverseFirstK(queue<int> q, int k) {
//         //create a stack
//         stack<int> st;
        
//         if(k > q.size()) return q;
        
//         //run a loop for k elements and push them in stack
//         for(int i = 0; i < k; i++){
//             st.push(q.front());
//             q.pop();
//         }
        
//         //run a loop until s is empty and push all elements back in queue
//         while(!st.empty()){
//             q.push(st.top());
//             st.pop();
//         }
        
//         //run a loop till size - k, pop from front of queue and push 
//         // them back in queue
//         int size = q.size();
//         for(int i = 0; i< size - k; i++){
//             q.push(q.front());
//             q.pop();
//         }
//         return q;
        
//     }
// };




// https://www.geeksforgeeks.org/problems/interleave-the-first-half-of-the-queue-with-second-half/1
// class Solution {
//   public:
//     queue<int> rearrangeQueue(queue<int> q) {
//         //Input  : 11 12 13 14 15 16 17 18 19 20
//          //Output :  11 16 12 17 13 18 14 19 15 20

//         //Initilize an empty stack and store the halfSize
//         stack<int> st;
//         int halfSize = q.size()/2;

//         //Push first half of queue in stack
//         // q : 16 17 18 19 20 - st : 15 14 13 12 11
//         for(int i = 0; i< halfSize; i++){
//             st.push(q.front());
//             q.pop();
//         }

//         //Enqueue back the stack elements
//         //q : 16 17 18 19 20 15 14 13 12 11
//         while(!st.empty()){
//             q.push(st.top());
//             st.pop();
//         }

//         //dequeue the first half elements again and enque them back
//         //q : 15 14 13 12 11 16 17 18 19 20
//         for(int i = 0; i < halfSize; i++){
//             q.push(q.front());
//             q.pop();
//         }
//         //again push the first half elements in stack
//         //q : 16 17 18 19 20 - st : 11 12 13 14 15 
//         for(int i = 0; i < halfSize; i++){
//             st.push(q.front());
//             q.pop();
//         }

//         // interleave the elements of queue and stack
//         //q : 11 16 12 17 13 18 14 19 15 20
//         while(!st.empty()){
//             q.push(st.top());
//             st.pop();
//             q.push(q.front());
//             q.pop();
//         }
//         return q;
        
//     }
// };