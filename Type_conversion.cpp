#include<bits/stdc++.h>
using namespace std;
int main() {
    
//     //implicit type conversion order :  bool --> char --> short int --> int -->unsigned int --> long --> unsigned long --> 
                                            // long long --> float --> double --> long double
 
    
    
    //problems around it :  loss of memory
    
    // int x=10;
    // char a = 'b';
    
    // float f = 10.5;
    // int var =  f;
    // cout<<var;
    // int y = x + (a-'a');
    // cout<<y;
    
    
    //explicit type conversion :  convert data type to another manually; 1. using assignment operators , 2. using cast operator 
    
    // type cassting : (datatype)expression
    //function style : datatype(Expression)
    
    
    char a = 'a';
    int v = (int)a;
    int y  = int(a);
    cout<<v<<" "<<y;

    
}