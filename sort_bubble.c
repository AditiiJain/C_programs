//Bubble sort
#include<stdio.h>
int main()
{   
    int a[10],size,temp;
    printf("\n*****BUBBLE SORT*****");
    printf("\nenter size of array:");
    scanf("%d",&size);
    printf("enter array elements:");
    for(int i=0;i<size;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-1-i;j++)
        if(a[j]>a[j+1])
        {
           temp=a[j];
           a[j]=a[j+1];
           a[j+1]=temp;
        }
    }
    printf("\nafter sorting array is:");
    for(int i=0;i<size;i++)
    printf("%d    ",a[i]);
    return 0;
}
