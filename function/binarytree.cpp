//Linklist Representation
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};
int main(){
    struct Node*root;
    root=(struct Node*)malloc(sizeof(struct Node));
    root->data=10;
    root->left=NULL;
    root->right=NULL;
    printf("%d",root->data);
    return 0;
}
//Array Representation
#include<stdio.h>
int main(){
    int arr[9]={10,20,30,40,50,0,70,80,90};
    for(int i=0;i<9;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
