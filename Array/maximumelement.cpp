#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter an number:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter Element of array:"<<i+1<<" ";
        cin>>arr[i];
    }
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Maximum Element = "<<max;
}