#include<bits/stdc++.h>
using namespace std;
class stud{
    int a;
    int b;
    public:
    stud(){
        a = 0;
        b = 0;
    }
    stud(int x,int y){
        a = x;
        b = y;
    }
    /* syntax->Return_type operator symbol (argument ())*/
    
    
    //binary operator overloading
    stud operator +(stud c){
      stud temp;
       temp.a = a+c.a;
       temp.b = b + c.b;
      return temp;
    }
    //unary operator overloading
    stud operator --(){
        return stud(a-1,b-1);
    }
    
    
    void print(){
        cout<<a<<" "<<b;
        return;
    }
};
int main(){
    stud a1(1,2);
    stud a2(3,4);
    
    stud c2 = --a1;
    c2.print();
    
}

//create a class of students -> {name,roll number} ->overload the '+' so that it adds up the roll number concatnate the name , a : rohan, 23 .b:  sohan 45 ,  a+b -> rohansohan, 68
    