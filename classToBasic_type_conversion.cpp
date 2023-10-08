#include<bits/stdc++.h>
using namespace std;

//class->basic
class Time{
  int hr,min;
  public:
  Time(int,int);
  operator int();
  void print();
//   void operator=(int);
};
//using constructor 
Time :: Time(int a,int b){
    hr = a;
    min = b;
}
void Time::print(){
    cout<<hr<<" ";
    cout<<min<<" ";
}
Time::operator int(){
    return (hr*60+min);
}
// using operator overloading
// void Time::operator=(int a){
//      hr = a/60;
//      min = a%60;
// }
int main(){
    int h,m,a;
    cin>>h;
    cin>>m;
    Time t1(h,m);
    a = t1.operator int();
    cout<<a;
    // /t1.print();
    
}