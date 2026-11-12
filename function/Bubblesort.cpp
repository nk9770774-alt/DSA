#include<stdio.h>
int main(){
    int arr[7]={1,3,6,5,2,9,7};
    for(int i=0;i<7;i++){
        for(int j=0;j<7-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
printf("Sorted Array:\n");
    for(int i=0;i<7;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
