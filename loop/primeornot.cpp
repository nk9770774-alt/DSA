#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter an number:";
    cin>>n;
    int flag=false;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            flag=true;
            break;
        }
    }
    if(n==1){
        cout<<"Nither prime nor composite";
    }
    else if(flag==false){
        cout<<"prime number";
    }else{
        cout<<"composite number";
    }
}