#include<stdio.h>
int merge();
int main()
{
    int size,size1;
    printf("\nEnter Your Size of Array=");
    scanf("%d",&size);
    size1=size+size;
    int arr[size],arr1[size],arr2[size+size];
    for(int i=0;i<size;i++)
    {
        printf("\n Enter your Elements In 1st Array=");
        scanf("%d",&arr[i]);
        arr2[i]=arr[i];
        
    }
     for(int i=0;i<size;i++)
    {
        printf("\n Enter your Elements In 2nd Array=");
        scanf("%d",&arr1[i]);
        arr2[size+i]=arr1[i];
    }
    merge(arr2,size1);
}
int merge(int num[],int size1)
{
    int temp;
    for(int i=0;i<size1-1;i++)
    {
        for(int j=i+1;j<size1;j++)
        {
            if(num[i]<num[j])
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    printf("\n\n After Merge And sort in Dedcending Order\n");
    for(int i=0;i<size1;i++)
    {
        printf("%d ",num[i]);
    }
    return 0;
}