#include<stdio.h>
int firstdup();
int main()
{
    int size;
    printf("\n Enter Size of array=");
    scanf("%d",&size);
    int arr[size];
    printf(" Firt Element Dupilicate In Array is %d",firstdup(arr,size));
    return 0;
}
int firstdup(int num[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("\nEnter Your Number=");
        scanf("%d",&num[i]);
    }
    int big;
    for(int i=0;i<size;i++)
    {
        if(big<num[i])
        {
            big=num[i];
        }
    }
    int visit[100]={0};
    for(int i=0;i<size;i++)
    {
        visit[num[i]]++;
    }
    for(int i=0;i<=100;i++)
    {
        if(visit[i]>1)
        {
            return i;
        }
    }
}