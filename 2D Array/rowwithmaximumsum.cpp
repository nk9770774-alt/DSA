#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[4][4]={
        {1,2,3,4},
        {3,4,5,6},
        {5,6,7,8},
        {5,4,3,7}
    };
    int maxi=INT_MIN, rowindex=-1;
    for(int i=0;i<4;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
        }
        if(sum>maxi){
            maxi=sum;
            rowindex=i;
        }
    }
    cout<<"Maximum sum = "<<maxi<<" "<<rowindex;
}