#include<iostream>
using namespace std;
int main(){
    // int arr[3][4];
    int arr[3][5]={
        {5,4,3,2,1},
        {9,8,7,6,5},
        {2,3,4,5,6,}
        };
        for(int i=0;i<3;i++){
            for(int j=0;j<5;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<"\n";
        }
}
