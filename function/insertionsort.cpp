#include<stdio.h>
int main(){
    int arr[9]={9,7,6,5,8,3,2,1,4};
    int key;
    for(int i=1;i<9;i++){
        key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    printf("sorted Array:\n");
    for(int i=0;i<9;i++){
        printf("%d ",arr[i]);
    }
}
