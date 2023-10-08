#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    virtual void speak() const{
        cout<<"Student speak"<<endl;
    }
};
class stud : public student{
    public:
    virtual void speak() const override{
        cout<<"stud speak"<<endl;
    }
};

class stud2 : public student{
    public :
    virtual void speak() const override{
        cout<<"stud2 speak"<<endl;
    }
};
int main(){
    student* rohan = new stud();
    stud* anjali = dynamic_cast<stud*>(rohan);
    if(anjali){
        anjali->speak();
    }
    else{
        cout<<"fail";
    }
    
    stud2* anjali2 =  dynamic_cast<stud2*>(rohan);
    if(anjali2){
        anjali2->speak();
    }
    else{
        cout<<"fail";
    }
    
}