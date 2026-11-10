#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[9]={12,21,32,54,65,76,87,98,34};
    int mx=INT_MIN;
    int smx=INT_MIN;
    for(int i=0;i<9;i++){
        if(arr[i]>mx){
            mx=arr[i];
        }
    }
    for(int i=0;i<9;i++){
        if(arr[i]>smx && mx != arr[i]){
            smx=arr[i];
        }
    }
    cout<<smx<<endl;
}