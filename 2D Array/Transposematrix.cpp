#include<iostream>
using namespace std;
int main(){
    int arr[5][5] = {
        {6, 0, 9, 2, 3},
        {5, 2, 6, 0, 9},
        {8, 4, 8, 1, 7},
        {4, 1, 7, 3, 5},
    {5,5,6,7,8}};
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Transpose Matrix===>"<<endl;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}