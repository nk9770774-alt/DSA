#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(vector<int>& v){
    for(int ele : v){
        cout<<ele<<" ";
    }
    cout<<endl;
}
    // reverse(v.begin(),v.end());
    // for(int ele : v){
    //     cout<<ele<<" ";
    // }
    // for(int i=v.size()-1;i>=0;i--){
    //     cout<<v[i]<<" ";
    // }
int main(){
    vector<int>v={12,13,43,54,65,76,87};
    print(v);
    int i=0;
    int j=v.size() - 1;
    while(i<j){
        // int temp=v[i];
        // v[i]=v[j];
        // v[j]=temp;
        swap(v[i],v[j]);//swap two number
        i++;
        j--;
       } 
    print(v);
}
