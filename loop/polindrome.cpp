#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter an number:";
    cin>>n;
    int rev=0;
    int original=n;
    while(n != 0){
        int digit=n%10;//lastdigit
        rev=rev*10+digit;//reverse number
        n=n/10;//Number ka digit kam hoga
    }
    cout<<"Reverse Number = "<<rev<<endl;
    if(original==rev){
        cout<<"polinedrom nummber."<<endl;
    }else{
        cout<<"Not Polinedrom Number."<<endl;
    }
}