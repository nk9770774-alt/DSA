#include<iostream>
using namespace std;
int main(){
    int arr[7]={12,43,54,76,87,98,45};
    int key=90;
    bool flag=false;
    for(int i=0;i<7;i++){
        if(arr[i]==key){
            flag=true;
            break;
        }
    }
    if(flag==true) cout<<"Element are Found";
    else cout<<"Element are not Found.";
}