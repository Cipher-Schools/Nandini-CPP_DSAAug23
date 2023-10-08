//binary search : 
#include<bits/stdc++.h>
using namespace std;
int binary_search_recursive(vector<int>&v,int low,int high,int target){
    if(low<=high){
        int mid = (low+high)/2;
        if(v[mid]==target){
            return mid;
        }
        if(v[mid]>target){
            return binary_search_recursive(v,low,mid-1,target);
            }
        return binary_search_recursive(v,mid+1,high,target);
    }
    return -1;
}
int binary_search_iteratively(vector<int>&v,int low,int high,int target){
    while(low<=high){
        int mid = (low+high)/2;
        if(v[mid]==target){
            return mid;
        }
        else if(v[mid]>target){
            high = mid-1;
        }
        else{
            low = mid+1;            
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int target;
    cin>>target;
    int ans = binary_search_recursive(v,0,n-1,target);
    int ans2= binary_search_iteratively(v,0,n-1,target);
    cout<<binary_search(v.begin(),v.end(),target)<<" ";
    
    
    //1-true, 0->false;
    
}
//upper_bound : returns the iterator that has a value greater than our target
//lower_bound : return the iterator that has a value not less than our target