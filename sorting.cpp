#include <bits/stdc++.h>
using namespace std;
//BUBBLE SORT
//     ->its a comparison based sorting algorithm 
//     ->in every step we compare the adjacent element 
    
//   1st pass :  3 1 4 5 2 : 1 3 4 5 2 :> 1 3 4 2 5 
//   ->in the first pass we have shifted the maximum element to the end .
    // B.T.C : N - > the array is already sorted
    // W.T.C : ->sorted in reversed order 

//Q : Write a function to sort characters/letters in a string 
void bubble(vector<int>&arr){
    for(int i=0;i<arr.size();i++){
        for(int j=1;j<arr.size()-i;j++){
            if(arr[j]<arr[j-1]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
        }
    }
}

    
}   
void bubble_string(string &s){
    
    for(int i=0;i<s.size();i++){
        
        for(int j=1;j<s.size()-i;j++){
            
            if((s[j]-'a')<(s[j-1]-'a')){
                char temp = s[j];
                s[j] = s[j-1];
                s[j-1] = temp;
           
            }
       }
   }
   
}
    
//SELECTION SORT 

//WE picks up all the element one by one and put them in the appropriarte position 
//eg :  4 5 1 3 2 
int select(vector<int>&arr,int i){
    int maxi = INT_MIN;
    int maxindex = 0;
    for(int j=0;j<=i;j++){
        if(maxi<arr[j]){
            maxi = arr[j];
            maxindex = j;
        }
    }
    return maxindex;
}
void selection(vector<int>&arr){
    for(int i=0;i<arr.size();i++){
        int last = arr.size()-i-1;
        int maxindex = select(arr,last);
        int temp = arr[last];
        arr[last] = arr[maxindex];
        arr[maxindex] = temp;
    }
}



//INSERTION SORT 
//4 5 1 3 2 : 

void insertion(vector<int>&arr){
    int i,k,j;
    for(int i=1;i<arr.size();i++){
        k = arr[i];
        j = i-1;
        while(j>=0 && arr[j]>k){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = k;
    }
}

//Q2 : IF I GIVE U A ARRAY , THEN TELL ME IF 2 ELEMENTS WILL SUM UP TO THE KEY 

void two_sum(vector<int>&arr, int k){
    // //brute force :
    // for i=0,n 
    // for j=i+1;n;
    // if arr[i]+arr[j]==key
    // cout<<arr[i]<<" "<<arr[j]
    //STL    
    sort(arr.begin(),arr.end());
    // 1 2 3 4 5 
    int start = 0;
    int end = arr.size()-1;
    while(start<end){
        int sum = arr[start]+arr[end];
        if(sum==k){
            cout<<arr[start]<<" "<<arr[end];
            break;
        }
        else if(sum<k){
            start++;
        }
        else{
            end--;
        }
    }
}

int main() {
  
   int n;
   cin>>n;
    vector<int>arr(n);
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   int k;
   cin>>k;
   two_sum(arr,k);
   
   //insertion(arr);
//   for(int i=0;i<n;i++){
//       cout<<arr[i]<<" ";
//   }
//   cout<<endl;
//   string s;
//   cin>>s;
//   cout<<s<<endl;
//   bubble_string(s);
//   cout<<s;
}





/* shape of grid,matrix
[[][][][]]

a b c->rows
d e f 
j k l !columns 
vetor<vector<int>>arr;
int n = matrix.size();//rows
int m = matrix[0].size();//columns 
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
}
Q : Create a matrix , cin the values from stdin 
Q : form a transpose of a matrix.

a = 1 2 3
    4 5 6
    7 8 9
T(a) = 1 4 7
       2 5 8
       3 6 9



*/