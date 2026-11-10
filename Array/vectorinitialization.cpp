#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,5,6,7,8,9};
    // cout<<v[2]<<" ";
    // cout<<v[5]<<" ";
    // cout<<v[0]<<" ";
    // cout<<v[1]<<" ";
    // cout<<v.size()<<" ";
    // cout<<v.capacity();
    //Multiply even nummber by 2 square the odd numbers
    // for(int i=0;i<v.size();i++){
    //     if(v[i]%2 == 0) v[i]*=2;
    //     else v[i]*=v[i];
    // }
    for(int ele : v){
        if(ele % 2 == 0) ele*=2;
        else ele *= ele;
    }
    for(int ele : v){
    cout<<ele<<" ";
    }
}