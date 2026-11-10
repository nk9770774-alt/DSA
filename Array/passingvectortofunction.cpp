#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void change(vector<int>& v){
        v[2]=10;
}
int main(){
    vector<int> v={1,2,3,4,5,6,7};
    change(v);
    cout<<v[2]<<endl;
}