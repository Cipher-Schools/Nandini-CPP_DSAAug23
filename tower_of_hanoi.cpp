#include<bits/stdc++.h>
using namespace std;
void tower(int n , char a, char b , char c){
    if(n==1){
        cout<<n<<" : " <<a<<"->"<<c<<endl;
        return;
    }
    tower(n-1,a,c,b);
    cout<<n<<": "<<a<<"->"<<c<<endl;
    tower(n-1,b,a,c);
}
int main(){
    int n;
    cin>>n;
    tower(n,'A','B','C');
}