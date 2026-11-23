class Solution {
  public:
    int sumOfDigits(int n) {
       int sum=0;
       while(n != 0){
           int digit=n % 10;
           sum=sum+digit;
           n=n/10;
       }
       return sum;
        
    }
};
// count the digit on fgf
class Solution {
  public:
    int countDigits(int n) {
        int count=0;
        if(n==0){
            return 1;
        }
        while(n != 0){
            count++;
            n=n/10;
        }
        return count;
    }
};
