#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the rows:";
    cin>>n;
    int m;
    cout<<"Enter the columns:";
    cin>>m;
    int arr[n][m];

    // rows wise  print the array

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // column wise print the array

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}