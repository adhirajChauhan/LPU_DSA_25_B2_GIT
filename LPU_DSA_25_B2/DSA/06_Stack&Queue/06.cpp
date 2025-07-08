#include<iostream>
#include<stack>
using namespace std;

void reverseString(string s){
    stack<string> st;

    for(int i = 0; i < s.length(); i++){
        string word = "";
        while(i < s.length() &&s[i] != ' '){
            word += s[i];
            i++;
        }
        st.push(word);

        while(!st.empty()){
            cout << st.top() << " ";
            st.pop();
        }
    }
}
 
int main()
{
 
}