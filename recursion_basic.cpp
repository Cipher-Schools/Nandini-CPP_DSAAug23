#include<bits/stdc++.h>
using namespace std;
int fib(int n){
    if(n<0){
        return 0;
    }
    if(n==1||n==0){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}
void rev(string &s,int low,int high){
    if(low>=high){
        return ;
    }
    swap(s[low],s[high]);
    rev(s,low+1,high-1);
}
int main(){
    //fibonacci number 
    int n;
    cin>>n;
    cout<<fib(n);
    //reversing a string using recursion
    cout<<endl;
    string s;
    cin>>s;
    rev(s,0,s.size()-1);
    cout<<s;
}