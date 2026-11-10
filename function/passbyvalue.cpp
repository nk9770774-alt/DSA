#include<iostream>
using namespace std;
void swap(int& a,int& b){
    // a=a+b;
    // b=a-b;
    // a=a-b;
    int temp;
    temp=a;
    a=b;
    b=temp;
    // cout<<"After swaping==>"<<endl;
    // cout<<a<<endl;
    // cout<<b<<endl;
}
int main(){
    int a;
    cout<<"Enter the value of a:";
    cin>>a;
    int b;
    cout<<"Enter the value of b:";
    cin>>b;
    cout<<"Befor swaping==>"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    swap(a,b);
    cout<<"After swaping==>"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    
}