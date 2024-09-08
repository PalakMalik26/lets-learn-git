// Online C++ compiler to run C++ program online
//finding largest element in an array
#include <iostream>
using namespace std;
int func(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    cout<<"Before conersion"<<endl;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
   int max=func(arr,n);
   
    cout<<"After conversion"<<endl;
   cout<<max<<" "; 
    // Write C++ code here
    std::cout << "Try programiz.pro";

    return 0;
}


//Other method for doing this using sorting
#include<bits/stdc++.h>
using namespace std;
int sortarr(vector<int>&arr){
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sortarr(arr);
    
}