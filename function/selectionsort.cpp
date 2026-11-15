#include<stdio.h>
int main(){
    int arr[9]={12,36,98,45,34,94,54,76,87};
    for(int i=0;i<9;i++){
        int min=i;
        for(int j=i+1;j<9;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    for(int i=0;i<9;i++){
        printf("%d ",arr[i]);
    }
}
