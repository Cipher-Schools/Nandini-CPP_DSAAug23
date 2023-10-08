#include<bits/stdc++.h>
using namespace std;

//basic->class
class Time{
  int hr,min;
  public:
//   Time(int);
  void print();
  void operator=(int);
};
//using constructor 
// Time :: Time(int a){
//     hr = a/60;
//     min = a%60;
// }
void Time::print(){
    cout<<hr<<" ";
    cout<<min<<" ";
}
// using operator overloading
void Time::operator=(int a){
     hr = a/60;
     min = a%60;
}
int main(){
    int a;
    cin>>a;
    Time t1;
    t1 = a;
    t1.print();
    
}