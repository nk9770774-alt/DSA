#include<iostream>
using namespace std;
int max(int a,int b){
    if(a>b) return a;
    else return b;
}
int main(){
    int a;
    cout<<"Enter the value of a:";
    cin>>a;
    int b;
    cout<<"Enter the value of a:";
    cin>>b;
    int x=max(a,b);
    cout<<x<<" ";
}