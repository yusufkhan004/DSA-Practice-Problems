#include <bits/stdc++.h>

using namespace std;

void insertAtBottom(stack<int> &st, int data){

    if (st.empty()){
        st.push(data);
        return;
    }
    
    int temp = st.top();
    st.pop();
    insertAtBottom(st, data);

    st.push(temp);

}

void reverse(stack<int> &st){

    if(st.empty()) return;

    int temp = st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st,temp);
}

int main(){

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    //stack representation 4 3 2 1

    reverse(st);

    while(!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}