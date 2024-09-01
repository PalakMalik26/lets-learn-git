// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void merge(vector<int>&arr,int low,int mid,int high){
    int left=low;
    int right=mid+1;
    vector<int>temp;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
        
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
        
    }
}
void mergesort(vector<int>&arr,int low,int high){
if(low>=high){
    return;
}
int mid=(low+high)/2;
mergesort(arr,low,mid);
mergesort(arr,mid+1,high);
merge(arr,low,mid,high);
}
int main() {
    // Write C++ code here
    vector<int>arr={1,9,2,8,3,7,4,6,5};
    int n=9;
    cout<<"Before sorting Array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
  cout<<endl;
mergesort(arr,0,n-1);
cout<<"After sorting Array: "<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}