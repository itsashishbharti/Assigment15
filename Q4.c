#include<stdio.h>
int rot();
int main()
{
    int size;
    printf("\nEnter Array Size=");
    scanf("%d",&size);
    int arr[size];
   rot(arr,size);
   return 0;
}
int rot(int num[],int size)
{
     for(int i=0;i<size;i++)
    {
        printf("\nInsert your Data=");
        scanf("%d",&num[i]);
    }
    printf("\n Data Display From Record\n");
     for(int i=0;i<size;i++)
    {
        printf("%d ",num[i]);
    }
    int n;
    printf("\n How much time to data rotate left from right=");
    scanf("%d",&n);
   for(int i=0;i<n;i++)
    {
        int temp=num[0];
    
        for(int k=1;k<size;)
        {
            int j=k-1;
           num[j]=num[k];
            k++;
        
        }
        num[size-1]=temp;
    }
   printf("\n Data Display After %d Times Rotation\n",n);
    for(int i=0;i<size;i++)
   {
       printf("%d ",num[i]);
   }
    return 0;
}