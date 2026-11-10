#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter an number:";
    cin>>n;
    int sum=0;
    int original=n;
    while(n != 0){
        int digit=n%10;//lastdigit
        sum=sum+digit*digit*digit;//sum number
        n=n/10;//Number ka digit kam hoga
    }
    cout<<"sum = "<<sum<<endl;
    if(original==sum){
        cout<<"Armstrong nummber."<<endl;
    }else{
        cout<<"Not Armstrong Number."<<endl;
    }
}
