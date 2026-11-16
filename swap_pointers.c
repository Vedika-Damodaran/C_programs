#include<stdio.h>
int main()
{
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    int *ptr1=&n1, *ptr2=&n2;
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    printf("%d %d",n1,n2);
}