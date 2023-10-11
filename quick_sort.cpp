#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>&arr,int low,int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}
void qsort(vector<int>&arr,int low,int high){
    if(low<high){
        int part_index = partition(arr,low,high);
        qsort(arr,low,part_index-1);
        qsort(arr,part_index+1,high);
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<n<<endl;
    qsort(arr,0,n-1);
    cout<<"hi";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}