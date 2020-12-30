//Inverted full pyramid of *
#include<stdio.h>
int main()
{
    int n;
    printf("\nenter no of rows:");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        for(int j=5;j>=i;j--)
          printf(" ");
        for(int k=1;k<=i;k++)
        printf(" *");
        printf("\n");  
    }
}