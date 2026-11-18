#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[4][4]={
        {1,2,3,10},
        {3,4,5,6},
        {5,6,7,8},
        {5,4,3,7}
    };
    int rowindex=-1;
    int mini=INT_MAX;
    for(int i=0;i<4;i++){
        int maxi=INT_MIN;
        for(int j=0;j<4;j++){
            if(arr[i][j]>maxi){
                maxi=arr[i][j];
            }
        }
        if(mini>maxi){
            mini=maxi;
            rowindex=i;
        }
    }
    cout<<"Minimum element = "<<mini<<" "<<rowindex;
}