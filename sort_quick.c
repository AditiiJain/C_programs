//QUICK SORT IMPLEMENTATION IN C
#include <stdio.h>
 
void quicksort (int [], int, int);
 
int main()
{
    printf("\nSUBMITTED BY :- ADITI JAIN");
    printf("\nROLL NO. :-1901610100012");
    int list[50];
    int size, i;
 
    printf("\nEnter the number of elements: ");
    scanf("%d", &size); 
    printf("\nEnter the elements to be sorted:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &list[i]);
    } 
    printf("\nBefore applying quick sort   :");
  for (i = 0; i < size; i++) {
    printf("\t%d", list[i]);
  }
    quicksort(list, 0, size - 1);
    printf("\nAfter applying quick sort    :");
    for (i = 0; i < size; i++)
    {
        printf("\t%d ", list[i]);
    }
    printf("\n");
 
    return 0;
}
void quicksort(int list[], int low, int high)
{
    int pivot, i, j, temp;
    if (low < high)
    {
        pivot = low;
        i = low;
        j = high;
        while (i < j) 
        {
            while (list[i] <= list[pivot] && i <= high)
            {
                i++;
            }
            while (list[j] > list[pivot] && j >= low)
            {
                j--;
            }
            if (i < j)
            {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
        temp = list[j];
        list[j] = list[pivot];
        list[pivot] = temp;
        quicksort(list, low, j - 1);
        quicksort(list, j + 1, high);
    }
}







