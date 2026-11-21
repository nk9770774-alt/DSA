#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>arr1={
        {1,2},
        {3,4},
        {5,6}
    };
    vector<vector<int>>arr2={
        {1,2,3,4},
        {5,6,7,8}
    };
    int n=arr1.size();
    int m=arr2[0].size();
    int o=arr1[0].size();
    vector<vector<int>>res(n,vector<int>(m,0));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int k=0;k<o;k++){
                res[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}