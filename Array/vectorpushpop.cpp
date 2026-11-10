#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(15);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(-6);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.pop_back();
    cout<<v.size()<<" "<<v.capacity()<<endl;
}