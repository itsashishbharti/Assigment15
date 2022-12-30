#include<stdio.h>
int reverse();
int main()
{
    int size;
    printf("\n Enter Size of Array=");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("\nInsert Your Number=");
        scanf("%d",&arr[i]);
    }
    reverse(arr,size);
}
int reverse(int num[],int size)
{
    for(int i=size-1;i>=0;i--)
    {
        printf("%d ",num[i]);
    }
}