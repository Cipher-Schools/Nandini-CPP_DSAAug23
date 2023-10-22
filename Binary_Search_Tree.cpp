#include<bits/stdc++.h>
using namespace std;
class BST{
  struct node{
      int data;
      node* left;
      node* right;
  };
  
  node* root; //main root
  
  node* insert(int a,node* t){
      if(t==nullptr){
          t = new node;
          t->data = a;
          t->left = nullptr;
          t->right = nullptr;
          return t;
      }
      else if(a<t->data){
          t->left = insert(a,t->left);
      }
      else if(a>t->data){
          t->right = insert(a,t->right);
      }
      return t;
  }
  
  //minimum value in a bst;
  
  node* mini(node* t){
      if(t==nullptr){
        return nullptr;   
      }
      else if(t->left==nullptr){
          return t;
      }
      else{
          return mini(t->left);
      }
  }
  
  node *remove(int x,node* t){
      if(t==nullptr){
          return nullptr;
      }
      else{
          node* temp;
          if(x<t->data){
              t->left = remove(x,t->left);
              
          }
          else if(x>t->data){
              t->right = remove(x,t->right);
          }
          else if(t->left && t->right){
              temp = mini(t->right);
            //   cout<<(temp->data);
              
              t->data =  temp->data;
              t->right = remove(t->data,t->right);
          }
          else{
              temp = t;
              if(t->left==nullptr){
                  t = t->right;
              }
              else if(t->right==nullptr){
                  t = t->left;
              }
              delete(temp);
          }
      }
      return t;
  }
  
  
  
  void inorder(node* t){
      if(t == NULL)
            return;
        inorder(t->left);
        cout << t->data << " ";
        inorder(t->right);
  }
  public :
  BST(){
      root=nullptr;
  }
  void insert(int x){
      root = insert(x,root);
  }
  void print(){
      inorder(root);
      cout<<endl;
  }
  void remove(int x){
      root = remove(x,root);
  }
};
int main(){
    int n;
    cin>>n;
    BST t;
    while(n--){
        int a;
        cin>>a;
        t.insert(a);
    }
    t.print();
    t.remove(7);
    t.print();
    
    
}