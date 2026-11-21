#include<stdio.h>
void main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        int min=arr[i];
        for(int j=i+1;j<size;j++){
            if(arr[j]<min){
                int temp=arr[j];
                arr[j]=min;
                min=temp;
            }
        }
        arr[i]=min;
        for(int k=0;k<size;k++){
            printf("%d ",arr[k]);
        }
        printf("\n");
    }
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}