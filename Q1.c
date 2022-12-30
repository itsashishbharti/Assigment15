#include<stdio.h>
int big();
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
    result=big(arr,size);
    printf("\nLargest Number in Array=%d",result);
    return 0;
}
int big(int num[],int size)
{
    int temp=0;
    for(int i=0;i<size;i++)
    {
        if(num[i]>temp)
        {
            temp=num[i];
        }
    }
    return temp;
}