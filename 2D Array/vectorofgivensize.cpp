#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter rows:";
    cin>>m;
    cout<<"Enter columns:";
    cin>>n;
    // vector<int>arr(n,5);
    vector<vector<int>>arr(m,vector<int>(n,7));
    arr.push_back(vector<int>(4,-1));//isko dekho 6,6
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}