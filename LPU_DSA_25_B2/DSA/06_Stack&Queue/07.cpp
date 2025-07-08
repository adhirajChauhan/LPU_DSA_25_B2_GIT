#include<iostream>
using namespace std;

void solve(stack<int> & s, int curr, int mid){
    int topEle = s.top();
    s.pop();

    if(curr == mid) return;
    solve(s, curr+1, mid);

    s.push(topEle);
}

void deleteMid(stack<int> & s){
    int size = s.size();
    int mid = (size + 1)/2;
    solve(s,1,mid);
}
 
int main()
{
 
}




// User function Template for C++

class Solution {
  public:
    stack<int> insertAtBottom(stack<int> st, int x) {
        if(st.empty()){
            st.push(x);
            return st;
        }
        
        int temp = st.top();
        st.pop();
        
        st = insertAtBottom(st, x);
        
        st.push(temp);
        return st;
    }
};