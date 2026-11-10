#include<iostream>
using namespace std;
int countdigit(int n,int* ptr){
    int count=0;
    if(n==0) count=1;
    while(n != 0){
    count++;
    n=n/10;
    }

    *ptr= count;
}
int main(){
    int n;
    cout<<"Enter an number:";
    cin>>n; 
    int c=0;    
    countdigit(n,&c);
    cout<<c;
}