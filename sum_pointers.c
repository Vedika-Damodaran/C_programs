#include<stdio.h>
void main()
{
    int size;
    scanf("%d",&size);
    int arr[size],sum=0;
    int *ptr=arr;
    for(int i=0;i<size;i++)
    {
        scanf("%d",ptr+i);
        sum+=*(ptr+i);
    }
    printf("%d",sum);
}