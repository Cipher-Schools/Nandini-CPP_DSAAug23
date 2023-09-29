#include<bits/stdc++.h>
using namespace std;
void merge1(vector<int>&arr,int low,int mid,int high){
    vector<int>temp;
    int i = low;
    int j = mid+1;
    while(i<=mid && j<=high){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=high){
        temp.push_back(arr[j]);
        j++;
    }
    for(int k=low;k<=high;k++){
        arr[k] = temp[k-low];
    }
}

void merge_sort(vector<int>&arr,int low,int high){
    if(low>=high){
        return;
    }
    int mid = (low+high)/2;
    merge_sort(arr,low,mid); //left
    merge_sort(arr,mid+1,high); //right
    merge1(arr,low,mid,high); //merging them together
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    merge_sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}