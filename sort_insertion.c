//Insertion sort
#include<stdio.h>
int main()
{
    int a[10],size,i,temp,j;
    printf("\nenter size of array:");
    scanf("%d", &size);
    printf("enter array elements:");
    for (i = 0; i < size; i++)
        scanf("%d", &a[i]);
    for(int i=1;i<size;i++)    
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
    printf("\nsorted array: ");
    for(int i=0;i<size;i++)
    {
        printf("%d  ",a[i]);
    }
}