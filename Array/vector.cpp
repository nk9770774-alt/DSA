#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    vector<int>arr(8,18);//indexing 0 to 4
    int n=arr.size();//size of the array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    // cout<<n<<endl;
    arr.push_back(6);
    arr.push_back(7);//adds last element
    arr.push_back(45);
    arr.push_back(49);
    arr.pop_back();//remove last element
    cout<<endl;
    n=arr.size();//size of the array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    // cout<<n<<endl;
}