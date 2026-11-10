#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v={1,2,7,4,5,7,6};
    // sort(v.begin(),v.end());//sort array
    // reverse(v.begin(),v.end());//reverse array
    sort(v.begin()+1,v.end()-1);
    for(int ele:v){
        cout<<ele<<" ";
    }
}