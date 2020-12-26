#include <stdio.h>
void selection(int a[], int size);
int main()
{
    int a[10], size, i;
    printf("\nsubmitted by:-Aditi Jain");
    printf("\nroll no:-1901610100012");
    printf("\nenter size of array:");
    scanf("%d", &size);
    printf("enter array elements:");
    for (i = 0; i < size; i++)
        scanf("%d", &a[i]);
    selection(a, size);
    return 0;
}
void selection(int a[], int size)
{
    int min, temp, i;
    for (int i = 0; i < size-1; i++)
    {
        min = i;
        for (int j = i + 1; j < size ; j++)
        {
            if (a[min] > a[j])
                min = j;
        }
        if(min!=i)
        {
        temp = a[min];
        a[min] = a[i];
        a[i] = temp;
        }
    }
    printf("\nsorted array is:");
    for (i = 0; i < size; i++)
        printf("%d    ", a[i]);
}