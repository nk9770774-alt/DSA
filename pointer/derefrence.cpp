#include<iostream>
using namespace std;
int main(){
    int x=34;
    int* p=&x;
    cout<<x<<endl;
    *p=54;//change variable x=54
    cout<<x<<endl;
    *p+=8;
    cout<<*p<<endl;
    int* p1=&x;
    int* p2=&x;
    cout<<p1<<endl;
    cout<<p2<<endl;
    cout<<&p1<<endl;//both are different
    cout<<&p2<<endl;//both are different
    cout<<*p1<<endl;
    cout<<*p2<<endl;//*-->defrence operator

}
