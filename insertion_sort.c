#include<stdio.h>
void main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        int temp=arr[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
        for(int k=0;k<size;k++){
            printf("%d ",arr[k]);
        }
        printf("\n");
    }
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}