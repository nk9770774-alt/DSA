#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>& a,vector<int>& b,vector<int>& c){
    cout<<"Sorted Array:"<<endl;
    for(int ele : c){
        cout<<ele<<" ";
    }
}
void merge(vector<int>& a,vector<int>& b,vector<int>& c){
    int i=0,j=0,k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]) c[k++]=a[i++];
        else c[k++]=b[j++];
    }
    while(i<a.size()) c[k++]=a[i++];
    while(j<b.size()) c[k++]=b[j++];
    
}
int main(){
    vector<int>a={1,2,3,4,5};
    vector<int>b={6,7,8,9,10};
    int n=a.size(),m=b.size();
    vector<int>c(m+n);
    merge(a,b,c);
    print(a,b,c);
}
