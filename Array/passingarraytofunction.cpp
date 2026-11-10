#include<iostream>
using namespace std;
void change(int x[]){
    x[4]=89;
}
int main(){
    int x[]={12,34,54,65,87};
    change(x);
    cout<<x[4]<<endl;
}