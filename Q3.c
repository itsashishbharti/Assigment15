#include<stdio.h>
int sort();
int main()
{
    int size;
    printf("\nEnter Your array Size=");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
       printf("\nInsert Your Data=");
        scanf("%d",&arr[i]); 
    }
    sort(arr,size);
    return 0;
}
int sort(int num[],int size)
{
    printf("\n Unsorted Data\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",num[i]);
    }
        int temp;
        for(int i=0;i<size;i++)
        {
            for(int j=i+1;j<size;j++)
            {
                if(num[i]>num[j])
                {
                    temp=num[j];
                    num[j]=num[i];
                    num[i]=temp;
                }
            }
        }
        printf("\n Sorted Data\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",num[i]);
    }
}