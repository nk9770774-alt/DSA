#include<iostream>
using namespace std;
void fun(char x){
    cout<<"Hi"<<endl;

}
void fun(int x){
    cout<<"Good Morning"<<endl;
}
void fun(double x){
    cout<<"kaise ho Nitin";
}
int main(){
    fun('a');//call of overloaded 'fun()' is ambiguous
    fun(7);
    fun(5.6);
    
}