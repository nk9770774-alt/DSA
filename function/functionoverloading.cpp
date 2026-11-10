#include<iostream>
using namespace std;
void fun(){
    cout<<"Hi"<<endl;

}
void fun(int x){
    cout<<"Good Morning"<<endl;
}
void fun(int x,int y){
    cout<<"kaise ho Nitin";
}
int main(){
    fun();//call of overloaded 'fun()' is ambiguous
    fun(7);
    fun(5,6);
    
}