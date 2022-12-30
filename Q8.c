#include<stdio.h>
int countdup();
int main()
{
    int size;
    printf("\nEnter Size of Array= ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("\n Enter Your Elements =");
        scanf("%d",&arr[i]);
    }
    countdup(arr,size);
}
int countdup(int num[],int size)
{
    int big;
    for(int i=0;i<size;i++)
    {
        if(num[i]>big)
        {
            big=num[i];
        }
    }
    int dup[big];
      for(int i=0;i<big;i++)
    {
        dup[i]=0;
    }
    for(int i=0;i<size;i++)
    {
        dup[num[i]]++;
    }
    for(int i=0;i<big;i++)
    {
        if(dup[i]==1)
        {
            printf("\nUnique Element in Array is %d",i);
        }
    }
    return 0;
}
