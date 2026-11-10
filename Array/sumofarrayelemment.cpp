#include<iostream>
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
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"Sum = "<<sum;
}