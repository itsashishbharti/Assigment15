#include<stdio.h>
int small();
int main()
{
    int size,result;
    printf("\nEnter Your array Size=");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
       printf("\nInsert Your Data=");
        scanf("%d",&arr[i]); 
    }
    result=small(arr,size);
    printf("\nLargest Number in Array=%d",result);
    return 0;
}
int small(int num[],int size)
{
    int temp=num[0];
    for(int i=1;i<size;i++)
    {
        if(num[i]<temp)
        {
            temp=num[i];
        }
    }
    return temp;
}