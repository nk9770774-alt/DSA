#include<iostream>
using namespace std;
int main(){
    int arr[]={12,32,43,54,65,76,87,98};
    // output---->
    for(int i=0;i < sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr[i]<<" ";
    }
    // for(int i=0;i <=7;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<arr[0]<<" ";
    // cout<<arr[1]<<" ";
    // cout<<arr[2]<<" ";
    // cout<<arr[3]<<" ";
    // cout<<arr[4]<<" ";
    // cout<<arr[5]<<" ";
    // cout<<arr[6]<<" ";
    // cout<<arr[7]<<" ";

    
}