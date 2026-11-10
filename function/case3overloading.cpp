#include<iostream>
using namespace std;
void fun(int x,float y){
    cout<<"sahid"<<endl;
}
void fun(float y, int x){
    cout<<"Dhruv"<<endl;
}
int main(){
    fun(4,5.5);
    fun(8.6,5);
}