#include<iostream>
using namespace std;
int main(){
    int arr[2][2]={
        {1,34},
        {2,9}
    };
    int maxi=arr[0][0];
    int smaxi=arr[0][0];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(arr[i][j]>maxi){
                maxi=arr[i][j];
            }
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(arr[i][j]>smaxi && maxi != arr[i][j]){
                smaxi=arr[i][j];
            }
        }
    }
    cout<<"Second Maximum Element = "<<smaxi;
}