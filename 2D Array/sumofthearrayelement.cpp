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

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum=sum+arr[i][j];
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"sum = "<<sum;

}