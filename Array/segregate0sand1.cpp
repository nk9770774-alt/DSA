class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
      int zero=0;
      int one=arr.size()-1;
        while(zero<one){
            if(arr[zero]==0){
                zero++;
            }else if(arr[one]==1){
                one--;
            }else {
                swap(arr[zero],arr[one]);
                zero++;
                one--;
            }
        }
    }
};
// Method--2
   int zeros=0;
        int ones=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                zeros++;
            }else{
                ones++;
            }
        }
            for(int i=0;i<zeros;i++){
                arr[i]=0;
            }
            for(int i=zeros;i<arr.size();i++){
                arr[i]=1;
            }
        Method 1
