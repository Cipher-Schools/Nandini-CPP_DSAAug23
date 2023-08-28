//stack : linear data structure which follows LIFO mechanism 

/*
1.push-> void
2.pop-> void
3.empty-> bool
4.top->int

    arr : 
    
    top = -1;
    
    push : top++, arr[top] = element; (0) : 0 (top=0)

    pop : top--

*/
#include<bits/stdc++.h>
using namespace std;
#define n 100
class Stack{
  public:
    int top;
    int *arr;
    
    Stack(){
        arr = new int [n];
        top = -1;
    }
    void push(int x){
        if(top==n-1){
            cout<<"stack is full"<<endl;
            return;
        }
        top++;
        arr[top] = x;
    }
    void pop(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
            return;
        }
        top--;
    }
    int Top(){
        if(top==-1){
            cout<<"No elements in the stack"<<endl;
            return -1;
        }
            return arr[top];
    }
    
    bool isempty(){
        if(top==-1){
            return true;
        }
        return false;
    }
};
int main(){
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    cout<<st.isempty()<<endl;
}
