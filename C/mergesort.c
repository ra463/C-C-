#include <stdio.h>

void merge(int a[], int beg, int mid, int end)
{
    int i,j,k;
    int n1= mid-beg+1;
    int n2 = end-mid;

    int left[n1],right[n2];

    for(int i=0;i<n1;i++){
        left[i] = a[beg+i];
        for(int j=0;j<n2;j++){
            right[j]=a[mid+1+j];
        }
    }
    
    i=0;
    j=0;
    k=beg;

    while (i < n1 && j < n2)    
    {    
        if(left[i] <= right[j])    
        {    
            a[k] = left[i];    
            i++;    
        }    
        else    
        {    
            a[k] = right[j];    
            j++;    
        }    
        k++;    
    }    
    while (i<n1)    
    {    
        a[k] = left[i];    
        i++;    
        k++;    
    }    
      
    while (j<n2)    
    {    
        a[k] = right[j];    
        j++;    
        k++;    
    }
}

void mergeSort(int a[], int beg, int end)
{
    if (beg < end)
    {
        int mid = (beg + end) / 2;
        mergeSort(a, beg, mid);
        mergeSort(a, mid + 1, end);
        merge(a, beg, mid, end);
    }
}

void printArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main()
{
    int a[] = {12, 31, 25, 8, 32, 17, 40, 42};
    int n = sizeof(a) / sizeof(a[0]);
    printf("Unsorted array elements - \n");
    printArray(a, n);
    mergeSort(a, 0, n - 1);
    printf("Sorted array elements - \n");
    printArray(a, n);
    return 0;
}
